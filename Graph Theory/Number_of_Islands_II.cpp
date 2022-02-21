#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
class DSU
{
private:
    vector<int> parent, size, rank;

public:
    DSU(int n)
    {
        for (int i = 0; i <= n; i++)
        {
            parent.push_back(i);
            size.push_back(1);
            rank.push_back(0);
        }
    }

public:
    int findPar(int node)
    {
        if (parent[node] == node)
        {
            return node;
        }
        return parent[node] = findPar(parent[node]);
    }

public:
    void unionSize(int u, int v)
    {
        int pu = findPar(u);
        int pv = findPar(v);

        if (pu == pv)
        {
            return;
        }

        if (size[pu] < size[pv])
        {
            parent[pu] = pv;
            size[pv] += size[pu];
        }
        else
        {
            parent[pv] = pu;
            size[pu] += size[pv];
        }
    }

public:
    void unionRank(int u, int v)
    {
        int pu = findPar(u);
        int pv = findPar(v);

        if (pu == pv)
        {
            return;
        }

        if (size[pu] < size[pv])
        {
            parent[pu] = pv;
        }
        else if (size[pv] < size[pu])
        {
            parent[pv] = pu;
        }
        else
        {
            parent[pu] = pv;
            rank[pv]++;
        }
    }
}

class Solutions
{
public:
    vector<int> numIsland2(int m, int n, vector<vector<int>> &positions)
    {
        swap(m, n);
        DSU dsu(n * m + 1);
        int cnt = 0;
        vector<int> ans;
        vector<vector<int>> grid(n, vector<int>(m, 0));
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        for (auto it : positions)
        {
            int x = it[0];
            int y = it[1];
            if (grid[x][y] == 1)
            {
                ans.push_back(cnt);
                continue;
            }
            cnt++;

            grid[x][y] = 1;

            int ind1 = x * m + (y + 1);
            for (int dir = 0; dir < 4; dir++)
            {
                int newx = x + dx[dir];
                int newy = y + dy[dir];

                int ind2 = newx * m + (newy + 1);
                if (newx >= 0 && newy >= 0 && newx < n && newy < m && grid[newx][newy] == 1 && dsu.findPar(ind1) != dsu.findPar(ind2))
                {
                    cnt--;
                    dsu.unionSize(ind1, ind2);
                }
            }
        }
        ans.push_back(cnt);
    }
    return ans;
}