#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, sum = 0;
    vector<int> vec;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        vec.push_back(j);
    }
    sort(vec.begin(), vec.end());
    for (int i = 1; i < n; i++)
    {
        sum = sum + vec[i];
    }
    cout << sum << endl;
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