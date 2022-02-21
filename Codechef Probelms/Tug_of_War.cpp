#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), ans;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {
        if (b.empty() || (*(--b.end()) < a[i]))
        {
            cout << "NO" << endl;
            return 0;
        }
        else if (*(--b.end()) == a[i])
        {
            ans.push_back(*(--b.end()));
            b.erase(--b.end());
        }
    }
    if (b.empty())
    {
        cout << "NO" << endl;
        return 0;
    }
    ans.push_back(*(--b.end()));
    b.erase(--b.end());
    cout << "YES" << endl;

    for (auto it : b)
        cout << it << " ";
    for (auto it : ans)
        cout << it << " ";
    cout << endl;
    return 0;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}