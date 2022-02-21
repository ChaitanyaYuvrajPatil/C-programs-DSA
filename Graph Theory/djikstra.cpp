#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
vector<int> adj[100005];

void djikstra(int source, int n)
{
    priority_queue<pair<int, int>,vector<pair<int, int>>,greater<pair<int, int>>> dq; //,vector<pair<int, int>>,greater<pair<int, int>>
    vector<int> dist(n+1, 0);

    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    dist[source] = 0;
    dq.push({0, source});
    vector<int> par(n+1,0);
    par[0] =0;
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
                par[adjNode] = node;
                dq.push({dist + wt,adjNode});
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << dist[i] << " ";
    }
    int x = n;
    cout<<x<<" ";
    while(par[n] !=1){
        x = par[x];
        cout<<x<<" ";
    }
}