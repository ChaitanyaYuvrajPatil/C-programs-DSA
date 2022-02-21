#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    if (A > B)
        B += C;
    else
        A += C;
    if (A >= B)
        B += D;
    else
        A += D;
    if (A >= B)
        cout << "N" << endl;
    else
        cout << "S" << endl;
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