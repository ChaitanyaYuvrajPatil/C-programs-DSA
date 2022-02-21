#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long

struct node
{
    int x, y, time;
    node(int _x, int _y, int _time)
    {
        x = _x;
        y = _y;
        time = _time;
    }
};

int orangesRotting(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();

    queue<node> q;
    int cntOrange = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 2)
            {
                q.push(node(i, j, 0));
            }
            if (grid[i][j] != 0)
            {
                cntOrange++;
            }
        }
    }

    int mx = 0, cnt = 0;
    while (!q.empty())
    {
        int x = q.front().x;
        int y = q.front().y;
        int time = q.front().time;
        q.pop();
        cnt++;
        mx = max(mx, time);
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};

        for (int i = 0; i < 4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            if (new_x >= 0 && new_x < n && new_y >= 0 && new_y < m && grid[new_x][new_y] == 1)
            {
                grid[new_x][new_y] = 2;
                q.push(node(new_x, new_y, time + 1));
            }
        }
    }
    if (cnt == cntOrange)
        return mx;
    return -1;
}
