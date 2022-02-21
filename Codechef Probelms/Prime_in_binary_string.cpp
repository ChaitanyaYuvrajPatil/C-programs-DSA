#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    string s;
    bool fa = false;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] == '1' && s[i + 1] == '0') || (s[i] == '1' && s[i + 1] == '1'))
        {
            fa = true;
            break;
        }
    }
    if (fa)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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