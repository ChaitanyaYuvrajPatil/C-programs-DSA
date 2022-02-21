#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

void check()
{
    int A, B, X, Y;
    cin >> A >> B >> X >> Y;
    if (A * B <= X * Y)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        check();
    }
    return 0;
}