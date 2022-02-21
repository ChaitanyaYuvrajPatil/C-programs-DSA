// https://www.lintcode.com/problem/the-maze-ii/description
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
vector<int> adj[100005];

int shortestDistance(vector<vector<int>> &maze, vector<int> &start, vector<int> &destination)
{
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

    int n = maze.size();
    int m = maze[0].size();

    vector<int> dist(n * m + 1, 0);
    for (int i = 0; i <= n * m; i++)
    {
        dist[i] = INT_MAX;
    }

    dist[start[0] * m + start[1]] = 0;
    pq.push({0, {start[0], start[1]}});
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    while (!pq.empty())
    {
        int dis = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();

        for (int ind = 0; ind < 4; ind++)
        {
            int newx = x;
            int newy = y;
            int cnt =0;

            while(newx >=0 && newy >=0&& newx<n && newy<m && maze[newx][newy] ==0){
                newx +=dx[ind];
                newy +=dy[ind];
                cnt++;
            }
            newx -=dx[ind];
            newy-=dy[ind];
            cnt--;

            if(dis + cnt <dist[newx*m+newy]){
                dist[newx*m+newy] = dis+cnt;
                pq.push({dis+cnt,{newx,newy}});
            }
        }
    }
    if(dist[destination[0]*m+destination[1]] == INT_MAX){
        return -1;
    }
    return dist[destination[0]*m+destination[1]];
}