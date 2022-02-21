#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
//vector<int> adj[100005];
//int vis[100005];

int bfs(int start, int end, int arr[], int n)
{
    int vis[end + 1]={0};
    vis[start] = 1;
    queue<pair<int, int>> q;
    q.push({start, 0});

    while (!q.empty())
    {
        int node = q.front().first;
        int step = q.front().second;
        if (node == end)
        {
            //cout << step << endl;
            return step;
        }
        q.pop();
        for (int i = 0; i < n; i++)
        {
            int it = node * arr[i];
            if (it <= end && !vis[it])
            {
                q.push({it, step+1});
                vis[it] = 1;
            }
        }
    }
    return -1;
}

signed main()
{
    int start = 2, end = 4;

    int arr[] = {2, 5, 10};
    int size = 3;

    cout << bfs(start, end, arr, size) << endl;

    return 0;
}