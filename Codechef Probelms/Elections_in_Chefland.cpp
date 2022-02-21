#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int A, B, C;
    cin >> A >> B >> C;
    if (A > 50)
    {
        cout << "A" << endl;
    }
    else if (B > 50)
    {
        cout << "B" << endl;
    }
    else if (C > 50)
    {
        cout << "C" << endl;
    }
    else
    {
        cout << "NOTA" << endl;
    }
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