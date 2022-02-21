#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long

int solve()
{
    int N, A, mx;
    cin >> N >> A;

    mx = min(N - A, A);
    cout << mx << endl;
    return 0;
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