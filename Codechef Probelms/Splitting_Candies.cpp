#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, m, s, t;
    cin >> n >> m;
    s = n / m;
    t = n % m;
    cout << s << " " << t << endl;
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