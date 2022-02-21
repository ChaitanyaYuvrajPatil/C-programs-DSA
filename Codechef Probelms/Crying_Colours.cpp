#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n;
    cin >> n;
    int vec[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> vec[i][j];
        }
    }
    if (vec[0][0] == n && vec[1][1] == n && vec[2][2] == n)
    {
        cout << 0 << endl;
        return 0;
    }
    int a = vec[1][0] + vec[2][0] + vec[2][1];
    int b = vec[0][1] + vec[0][2] + vec[1][2];
    cout << max(a, b) << endl;
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