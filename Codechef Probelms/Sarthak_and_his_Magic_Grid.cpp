#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

int solve()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << 1 << " ";
        }
        cout << endl;
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