#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X1, X2, n = 1;
        cin >> X1 >> X2;
        if (X1 == X2)
        {
            cout << "YES" << endl;
        }
        else if (X1 > X2)
        {
            while (n)
            {
                X1 = X1 + 1;
                X2 = X2 + 2;
                if (X1 == X2)
                {
                    cout << "YES" << endl;
                    n = 0;
                }
                if (X1 < X1)
                {
                    cout << "NO" << endl;
                    n = 0;
                }
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}