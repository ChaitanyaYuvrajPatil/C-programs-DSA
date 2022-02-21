#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

int solve()
{
    int mx = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        int a, b;
        cin >> a >> b;
        mx = max(mx, a + b);
    }
    cout << mx << endl;
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