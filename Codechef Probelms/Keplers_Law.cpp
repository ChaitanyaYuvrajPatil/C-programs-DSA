#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int T1, T2, R1, R2;
    cin >> T1 >> T2 >> R1 >> R2;
    double ans1 = (T1 * T1) * (R2 * R2 * R2);
    double ans2 = (T2 * T2) * (R1 * R1 * R1);
    //cout << ans1 << " " << ans2 << endl;
    if (ans1 == ans2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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