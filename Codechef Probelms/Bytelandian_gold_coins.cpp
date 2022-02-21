#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n;
    cin >> n;
    cout << max(n, n / 2 + n / 3 + n / 4) << endl;
    return 0;
}

signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    //cin >> t;
    while (1)
    {
        solve();
    }
    return 0;
}