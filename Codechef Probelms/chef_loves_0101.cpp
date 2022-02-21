#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, one = 0, zero = 0, mn;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            one = one + 1;
        else
            zero = zero + 1;
    }
    mn = min(one, zero) - 1;
    if (mn < 0)
    {
        mn = 0;
    }
    cout << mn << endl;
    return 0;
}
signed main()
{
    int t, sum;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}