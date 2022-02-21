#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long

vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
{
    int n = numCourses;
    vector<int> adj[numCourses];

    for (auto it : prerequisites)
    {
        adj[it[1]].push_back(it[0]);
    }

    vector<int> indegree(n, 0);

    for (int i = 0; i < n; i++)
    {
        for (auto it : adj[i])
        {
            // i---> it
            indegree[it]++;
        }
    }
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    vector<int> ans;
    while (!q.empty())
    {
        ans.push_back(q.front());
        int node = q.front();
        q.pop();
        for (auto it : adj[node])
        {
            indegree[it]--;
            if (indegree[it] == 0)
            {
                q.push(it);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (indegree[i] != 0)
        {
            vector<int> dum;
            return dum;
        }
    }
    return ans;
}