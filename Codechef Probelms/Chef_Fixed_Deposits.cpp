#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, x, sum = 0;
    cin >> n >> x;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        sum += j;
        vec.push_back(j);
    }
    if (sum < x)
    {
        cout << -1 << endl;
        return 0;
    }
    sort(vec.begin(), vec.end());
    sum = 0;
    int ct = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        sum += vec[i];
        // if (sum < x)
        ct++;
        if (sum >= x)
        {
            break;
        }
    }
    cout << ct << endl;
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