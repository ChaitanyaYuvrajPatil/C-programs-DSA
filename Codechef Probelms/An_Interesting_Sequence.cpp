#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n;
    cin >> n;
    int ct = 0;
    while (n % 2 == 0)
    {
        ct++;
        n /= 2;
    }
    cout << ct << endl;
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