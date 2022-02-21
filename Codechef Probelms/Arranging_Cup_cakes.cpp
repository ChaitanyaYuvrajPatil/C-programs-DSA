#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, mn = INT_MAX;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                mn = min(mn, abs(i - n / i));
            }
            else
            {
                mn = min(mn, abs(i - n / i));
            }
        }
    }
    cout << mn << endl;
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