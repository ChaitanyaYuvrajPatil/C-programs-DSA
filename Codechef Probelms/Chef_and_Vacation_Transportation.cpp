#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;
    int sum = X + Y;
    if (sum > Z)
    {
        cout << "TRAIN" << endl;
    }
    else if (sum < Z)
    {
        cout << "PLANEBUS" << endl;
    }
    else
    {
        cout << "EQUAL" << endl;
    }
    return 0;
}
signed main()
{
    int t, sum;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}