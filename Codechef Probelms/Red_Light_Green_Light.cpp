#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k, sum = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        if (j > k)
        {
            sum = sum + 1;
        }
    }
    cout << sum << endl;
    // return 0;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}