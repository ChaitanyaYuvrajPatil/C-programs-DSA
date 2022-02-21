#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    string s;
    int sum = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            sum += (s[i] - '0');
        }
    }
    cout << sum << endl;
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