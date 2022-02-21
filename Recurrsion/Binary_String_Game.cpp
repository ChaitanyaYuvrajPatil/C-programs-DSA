#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int fs = 0;
    for (int i = 0; i < n - 1; i++)
    {
        fs += abs(s[i + 1] - s[i]);
    }

    int remaining = (n - 1) - fs;
    if (remaining % 3)
    {
        cout << "JJ" << endl;
    }
    else
    {
        cout << "Uttu" << endl;
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