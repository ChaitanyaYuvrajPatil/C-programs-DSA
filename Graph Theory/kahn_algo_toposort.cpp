#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
vector<int> adj[100005];
vector<int> vis[100005] = {0};

void toposort(int n)
{
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

    while (!q.empty())
    {
        cout << q.front() << " ";
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
}

signed main()
{
    stack<int> st;

    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == false)
        {
            toposort(i, st);
        }
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}