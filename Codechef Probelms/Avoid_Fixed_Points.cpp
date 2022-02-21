#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

void check()
{
    int n, m = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int j;
        cin >> j;
        if (i + m == j)
        {
            m++;
        }
    }
    cout << m << endl;
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