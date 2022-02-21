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
        int n, z = 0, i = 1, m = 10;
        cin >> n;
        while (m)
        {
            m = (n / pow(5, i));
            z = z + m;
            i = i + 1;
        }
        cout << z << endl;
    }
    return 0;
}
