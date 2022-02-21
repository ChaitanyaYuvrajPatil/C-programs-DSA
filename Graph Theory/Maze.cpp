#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long

bool hasPath(vector<vector<int>> &maze, vector<int> &start, vector<int> &destination)
{
    int n = maze.size();
    int m = maze[0].size();

    queue<pair<int, int>> q;
    q.push({start[0], start[1]});

    int vis[n][m] = {0};
    vis[start[0], start[1]] = 1;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == destination[0] && y == destination[1])
        {
            return true;
        }
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};

        for (int i = 0; i < 4; i++)
        {
            int new_x = x;
            int new_y = y;

            while (new_x >= 0 && new_x < n && new_y >= 0 && new_y < m && maze[new_x][new_y] == 0)
            {
                new_x += dx[i];
                new_y += dy[i];
            }
            new_x -= dx[i];
            new_y -= dy[i];
            if (vis[new_x][new_y] == 0)
            {
                vis[new_x][new_y] = 1;
                q.push({new_x, new_y});
            }
        }
    }
    return false;
}