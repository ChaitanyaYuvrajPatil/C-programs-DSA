#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n;
    cin >> n;
    vector<int> setBitCnt(30);
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        for (int i = 0; i < 30; i++)
        {
            if (j & (1 << i))
            {
                setBitCnt[i]++;
            }
        }
    }
    for (int i = 0; i < 30; i++)
    {
        if (setBitCnt[i] > 1)
        {
            m |= (1 << i);
        }
    }
    cout << m << endl;
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