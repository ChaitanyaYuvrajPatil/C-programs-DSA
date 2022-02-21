#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

int solve()
{
    int n, xr;
    cin >> n >> xr;
    if (xr % 2 != 0)
    {
        if (n % 2 != 0)
            cout << "ODD" << endl;
        else
            cout << "EVEN" << endl;
    }
    else
    {
        if (n == 1)
            cout << "EVEN" << endl;
        else
            cout << "Impossible" << endl;
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