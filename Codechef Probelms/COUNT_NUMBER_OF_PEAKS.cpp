#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n;
    cin >> n;
    if (n < 3)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 10 * (n - 2) * pow(3,n-3) << endl;
    }
    return 0;
}

signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}