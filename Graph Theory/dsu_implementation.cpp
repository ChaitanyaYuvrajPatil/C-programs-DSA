#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

class DSU
{
private:
    vector<int> parent, size, rank;
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

// 1:18