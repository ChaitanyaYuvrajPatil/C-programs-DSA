#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

int solve()
{
    int max_ai = 500000;
    int n, x;
    cin >> n >> x;
    if (n == 1)
    {
        cout << x << endl;
        return 0;
        // continue;
    }
    vector<int> ans(n);
    int temp_xor = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ans[i] = i;
        temp_xor ^= i;
    }
    int last = x ^ temp_xor;
    int set_18 = (1 << 18);

    if (last >= (n - 1) && last <= max_ai)
        ans[n - 1] = last;
    else
    {
        ans[n - 1] = last ^ set_18;
        if ((ans[0] ^ set_18) == ans[n - 1])
            ans[1] ^= set_18;
        else
            ans[0] ^= set_18;
    }
    for (auto elem : ans)
        cout << elem << " ";
    cout << endl;
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