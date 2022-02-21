#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
vector<int> adj[100005];

void bfs_0_1(int source, int n)
{
    priority_queue<pair<int, int>> dq; //,vector<pair<int, int>>,greater<pair<int, int>>
    vector<int> dist(n, 0);

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dist[source] = 0;
    dq.push({0, source});

    while (!dq.empty())
    {
        int node = dq.top().first;
        int dist = dq.top().second;

        dq.pop;

        for (auto it : adj[node])       
        {
            int adjNode = it.first;
            int wt = it.second;
            if (dist + wt < dist[adjNode])
            {
                dist[adjNode] = dist + wt;
                dq.push({dist + wt,adjNode});
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << dist[i] << " ";
    }
}