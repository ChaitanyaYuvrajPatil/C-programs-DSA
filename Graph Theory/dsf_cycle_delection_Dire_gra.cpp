#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
vector<int> adj[100005];
int vis[100005], pathVis[100005];

void dfsCycle_DG(int node)
{
    vis[node] = 1;
    pathVis[node] = 1;

    for (auto it : adj[node])
    {
        if (vis[it] == false)
        {
            if (dfsCycle_DG(it) == true)
            {
                return true;
            }
        }
        else if (vis[it] == 1 && pathVis[it] == 1)
        {
            return true;
        }
    }
    pathVis[node] = 0;
    return false;
}

signed main()
{
    bool fl = false;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            if (dfsCycle_DG(i) == true)
            {
                fl = true;
                break
            }
        }
    }
    if (fl == true)
    {
        cout << "Cycle" << endl;
    }
    else
    {
        cout << "No Cycle" << endl;
    }
    return 0;
}