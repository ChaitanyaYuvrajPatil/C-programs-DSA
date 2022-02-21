#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        sum = sum + j;
    }
    cout << (sum / n) << endl;
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