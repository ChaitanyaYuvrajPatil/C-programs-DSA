#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int Z, Y, A, B, C;
    cin >> Z >> Y >> A >> B >> C;
    Z = Z - Y;
    A = A + B + C;
    if (Z >= A)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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