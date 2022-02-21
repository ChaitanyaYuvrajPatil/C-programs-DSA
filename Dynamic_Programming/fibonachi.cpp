#include <bits/stdc++.h>
using namespace std;
#define int long long

int fun(int n, vector<int> dp)
{
    if (n <= 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = fun(n - 1, dp) + fun(n - 2, dp);
}

//Dp(Recurtion Method)
/* 
signed main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << fun(n, dp) << endl;
    return 0;
}

*/

signed main()
{
    int n;
    cin >> n;
    int prev2 = 0;
    int prev = 1;
    for (int i = 2; i <= n; i++)
    {
        int cur = prev + prev2;
        prev2 = prev;
        prev = cur;
    }
    cout << prev << endl;
    return 0;
}