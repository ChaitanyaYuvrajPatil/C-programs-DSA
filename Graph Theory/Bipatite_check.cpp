#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
vector<int> adj[100005];
int col[100005] = {-1};

bool checkBipartite(int node, int color)
{
    col[node] = color;

    for (auto it : adj[node])
    {
        if (col[it] == -1)
        {
            if (checkBipartite(it, !color))
            {
                return true;
            }
            // when it comes here itmeans the col[it] is marked
            // as 1 or 0 which means it has been visited previously
            // hence we check if the adjecent has same color or not
            else if (col[it] == color)
            {
                return true;
            }
        }
    }
    return false;
}

bool checkBipartiteBSF(int node, int color)
{
    col[node] = color;
    queue<pair<int, int>> q;
    q.push(node, color);

    while (!q.empty())
    {
        int node = q.front().first;
        int color = q.front().second;

        for (auto it : adj[node])
        {
            if (vis[it] == -1)
            {
                q.push(it, !color);
                col[it] = color;
            }
            else if (col[it] == color)
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