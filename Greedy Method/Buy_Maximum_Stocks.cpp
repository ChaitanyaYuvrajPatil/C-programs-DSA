#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    // cin.tie(0)->sync_with_stdio(0);

    int n, k;
    cin >> n >> k;
    vector<int> v;
    vector<pair<int, int>> v_p;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin>>j;
        v.push_back(j);
    }
    for (int i = 0; i < n; i++)
    {
        v_p.push_back({v[i], i+1});
    }
    sort(v_p.begin(), v_p.end());
    int ans = 0;
    //cout << ans << endl;
    for (int i = 0; i < n; i++)
    {
        int price = v_p[i].first;
        int stock = v_p[i].second;

        if (stock * price <= k)
        {
            ans += stock;
            k -= (stock * price);
        }
        else
        {
            ans += (k / price);
            k -= price * (k / price);
        }
    }
    cout << ans << endl;
    return 0;
}