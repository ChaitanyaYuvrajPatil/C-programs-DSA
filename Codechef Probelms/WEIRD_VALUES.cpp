#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n;
    cin >> n;
    vector<vector<int>> inds(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x <= n)
            inds[x].push_back(i);
    }

    long long ans = 0;
    for (int x = 1; x <= n; x++)
    {
        vector<int> indsx = inds[x];
        indsx.insert(begin(indsx), 0);
        indsx.push_back(n + 1);
        for (int i = 1; i < int(size(indsx)) - x; i++)
        {
            ans += (long long)x * (indsx[i] - indsx[i - 1]) * (indsx[i + x] - indsx[i + x - 1]);
        }
    }
    cout << ans << endl;
    return 0;
}

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}