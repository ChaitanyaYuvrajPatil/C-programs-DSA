#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int N, D, p = 1;
    cin >> N >> D;
    for (int i = 1; i <= D; i++)
    {
        if (i <= 10)
        {
            p = p * 2;
            if (p > N)
            {
                p = N;
                break;
            }
        }
        else
        {
            p = p * 3;
            if (p > N)
            {
                p = N;
                break;
            }
        }
    }
    cout << p << endl;
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