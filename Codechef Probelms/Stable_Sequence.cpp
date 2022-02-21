#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, mx = 0, ele = 0;
    bool fa = true;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        mx = max(mx, vec[i]);
        if (i == 0)
        {
            ele = vec[0];
        }
        else
        {
            if (vec[i] != ele)
            {
                fa = false;
            }
        }
    }
    if (fa)
        cout << 0 << endl;
    else if (mx == vec[n - 1])
        cout << 1 << endl;
    else
        cout << 2 << endl;

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