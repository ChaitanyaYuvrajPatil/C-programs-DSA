#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n;
    cin >> n;
    vector<int> v, v1;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        v.push_back(j);
        v1.push_back(j);
    }
    sort(v1.begin(), v1.end());
    multiset<int> s, t;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        s.insert(v[i]);
        t.insert(v1[i]);
        if (s == t)
        {
            ans += (*s.rbegin() - *s.begin());
            s.clear();
            t.clear();
        }
    }
    cout << ans << endl;
    return 0;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}