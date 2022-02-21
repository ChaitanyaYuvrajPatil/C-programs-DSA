#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, k;
    cin >> n >> k;
    int result = 1;
    int x = min(k - 1, n - k);
    for (int i = 1; i <= x; i++)
    {
        result = (result * (n - i)) / i;
    }
    cout << result << endl;

    
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