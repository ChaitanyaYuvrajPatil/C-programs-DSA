#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n1, n2, n3, n, ct = 0;
    map<int, int> mpp;
    cin >> n1 >> n2 >> n3;
    n = n1 + n2 + n3;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        mpp[j]++;
    }
    for (auto it : mpp)
    {
        if (it.second >= 2)
        {
            ct++;
        }
    }
    cout << ct << endl;
    for (auto it : mpp)
    {
        if (it.second >= 2)
        {
            cout << it.first << endl;
        }
    }

    return 0;
}
signed main()
{
    solve();
    return 0;
}