#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
vector<int> adj[100005];
int vis[100005];

void dfs(int node, int parent)
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (vis[it] == false)
        {
            if (dfs(it, node) == true)
            {
                return true;
            }
            else if (vis[it] == true && it != parent)
            {
                return true;
            }
        }
    }
    return false;
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
            dfs(i, i);
        }
    }
    return 0;
}