#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n;
    cin >> n;
    vector<int> setBitCnt(30);
    while (n--)
    {
        int num;
        cin >> num;
        for (int i = 0; i < 30; i++)
        {
            if (num & (1 << i))
                setBitCnt[i]++;
        }
    }
    int ans = 0;
    for (int i = 0; i < 30; i++)
    {
        if (setBitCnt[i] > 1)
        {
            ans |= (1 << i);
        }
    }
    cout << ans << endl;
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