#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long

int f(int ind, int cnt, vector<int> &heights, vector<int> dp)
{
    if (ind == heights.size() - 1)
    {
        return cnt;
    }
    int mn = INT_MAX;
    for (int i = 1; i <= heights[ind]; i++)
    {
        if (ind + i < heights.size())
        {
            mn = min(mn, f(ind + i, cnt + 1, heights, dp));
        }
    }

    return mn;
}

/*
int f1(int ind, vector<int> &heights, vector<int> dp)
{
    if (ind == 0)
    {
        return 0;
    }
    if (dp[ind] != -1)
    {
        return dp[ind];
    }

    int mn = INT_MAX;
    for (int i = 1; i <= k; i++)
    {
        if ((ind - i) >= 0)
        {
            int jump = f1(ind - i, heights, dp) + abs(heights[ind] - heights[ind - i]);
            mn = min(mn, jump)
        }
    }

    return dp[ind] = mn;
}

*/
signed main()
{
    vector<int> vec = {2,2,0,1,4};
    vector<int> dp(vec.size() + 1, -1);
    cout << f(0, 0, vec, dp) << endl;
}