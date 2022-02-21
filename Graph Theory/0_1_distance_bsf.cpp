#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
vector<int> adj[100005];

void bfs_0_1(int source, int n)
{
    deque<pair<int, int>> dq;
    vector<int> dist(n, 0);

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dist[source] = 0;
    dq.push_front({source, 0});

    while (!dq.empty())
    {
        int node = dq.front().first;
        int dist = dq.front().second;

        dq.pop;

        for (auto it : adj[node])
        {
            int adjNode = it.first;
            int wt = it.second;
            if (dist + wt < dist[adjNode])
            {
                dist[adjNode] = dist + wt;
                if (wt == 1)
                {
                    dq.push_back({adjNode, dist + wt});
                }
                else
                {
                    dq.push_front({adjNode, dist + wt});
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << dist[i] << " ";
    }
}