#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int x1, y1, x2, y2, x3, y3, d1, d2, d3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    d1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    d2 = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
    d3 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
    if (d1 == d2 + d3 or d2 == d1 + d3 or d3 == d1 + d2)
    {
        return 1;
    }
    return 0;
}
signed main()
{
    int t, sum;
    cin >> t;
    while (t--)
    {
        sum = sum + solve();
    }
    cout << sum << endl;
    return 0;
}