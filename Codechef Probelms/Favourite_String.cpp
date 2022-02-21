#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'c')
        {

            if (s[i] == 'c' && s[i + 1] == 'o' && s[i + 2] == 'd' && s[i + 3] == 'e')
            {
                cout << "AC" << endl;
                break;
            }
            else
            {
                cout << "WA" << endl;
                break;
            }
        }
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