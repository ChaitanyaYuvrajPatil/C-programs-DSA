#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << "2" << endl;
    }
    if ((n & (n - 1)) == 0)
    {
        cout << (2 * n - 1) % 1000000007 << endl;
    }
    else
    {
        int bit = log2(n);
        int ans = pow(2, bit + 1);
        cout << ans % 1000000007 << endl;
    }

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