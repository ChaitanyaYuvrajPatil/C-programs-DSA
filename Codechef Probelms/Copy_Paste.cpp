#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n;
    cin >> n;
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        mpp[j]++;
    }
    cout << mpp.size() << endl;
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