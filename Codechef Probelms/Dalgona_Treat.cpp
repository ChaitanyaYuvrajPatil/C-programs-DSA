#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    if (n == 1)
    {
        mp[1]++;
    }
    else if (n == 2)
    {
        mp[3]++;
        mp[4]++;
    }
    else if (n % 2)
    {
        mp[1] += n - 2;
        mp[2]++;
        mp[(n + 1) / 2]++;
    }
    else
    {
        mp[1] += n - 1;
        mp[(n - 2) / 2]++;
    }
    cout << mp.size() << endl;
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    // return 0;
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