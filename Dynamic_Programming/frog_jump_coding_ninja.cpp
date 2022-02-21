#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long

int f(int ind, vector<int> &heights, vector<int> dp)
{
    if (ind == 0)
    {
        return 0;
    }
    if (dp[ind] != -1)
    {
        return dp[ind];
    }
    int l = f(ind - 1, heights, dp) + abs(heights[ind] - heights[ind - 1]);
    int r = INT_MAX;
    if (ind > 1)
    {
        int r = f(ind - 2, heights, dp) + abs(heights[ind] - heights[ind - 2]);
    }

    return dp[ind] = min(l, r);
}

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
    /*int l = f1(ind - 1, heights, dp) + abs(heights[ind] - heights[ind - 1]);
    int r = INT_MAX;
    if (ind > 1)
    {
        int r = f1(ind - 2, heights, dp) + abs(heights[ind] - heights[ind - 2]);
    }*/
    int mn = INT_MAX;
    for(int i=1;i<=k;i++){
        if((ind-i)>=0){
            int jump = f1(ind - i, heights, dp) + abs(heights[ind] - heights[ind - i]);
            mn = min(mn,jump)
        }
    }

    

    return dp[ind] = mn;
}

signed frog_jump(int n, vector<int> &heights)
{

    vector<int> dp(n + 1, -1);
    return f(n - 1, heights, dp);
}