#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n;
    cin >> n;
    if (n % 4 == 1)
        cout << "ALICE" << endl;
    else
        cout << "BOB" << endl;
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