#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        vec.push_back(j);
    }
    sort(vec.begin(), vec.end());
    cout << (vec[n - 1] - vec[0]) * vec[n - 2] << endl;
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