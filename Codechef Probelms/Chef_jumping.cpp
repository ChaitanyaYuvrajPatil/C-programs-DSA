#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int a,diff;
    cin >> a;
    diff = a%6;
    if (diff == 0 || diff == 1 || diff == 3)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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