#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long

int solve()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (x >= y)
    {
        cout << "PIZZA" << endl;
    }
    else if (x >= z)
    {
        cout << "BURGER" << endl;
    }
    else
    {
        cout << "NOTHING" << endl;
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