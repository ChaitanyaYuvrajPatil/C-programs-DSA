#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
vector<int> adj[100005];
int vis[100005];

void bfs(int node)
{
    vis[node] = 1;
    queue<int> q;
    q.push(node);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
}

signed main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            bfs(i);
        }
    }
    return 0;
}