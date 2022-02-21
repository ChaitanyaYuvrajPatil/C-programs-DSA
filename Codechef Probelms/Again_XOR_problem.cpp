#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, k, ct = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    int xo = 0;
    for (int i = 0; i <= n - k; i++)
        xo ^= (s[i] - '0');
    if (xo == 1)
        ct++;
    int indbeg = 0, indend = n - k + 1;
    while (indend < n)
    {
        xo ^= (s[indbeg++] - '0');
        xo ^= (s[indend++] - '0');
        if (xo == 1)
            ct++;
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