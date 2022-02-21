#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, ct = 0;
    cin >> n;
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        mpp[j]++;
    }
    for (auto it : mpp)
    {
        if (it.second == 1)
        {
            ct += 1;
        }
        else
        {
            if (it.first == 0)
            {
                ct += 1;
            }
            else
            {
                ct += 2;
            }
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