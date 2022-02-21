#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int t, seat, sum = 0;
    cin >> t;
    seat = t * (t + 1) / 2;
    for (int i = 0; i < t; i++)
    {
        int j;
        cin >> j;
        sum = sum + j;
    }

    if (seat == sum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
signed main()
{
    solve();
    return 0;
}