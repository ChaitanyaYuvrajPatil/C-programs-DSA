#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, m, ct = 0;
    cin >> n >> m;
    for (int i = n; i <= m; i++)
    {
        if (i % 10 == 2 || i % 10 == 3 || i % 10 == 9)
        {
            ct++;
        }
    }
    cout << ct << endl;
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