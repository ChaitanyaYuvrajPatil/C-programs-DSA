#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, sum = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        sum = sum + abs(s[i + 1] - s[i]);
    }
    int remain = n - 1 - sum;
    if (remain % 3)
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