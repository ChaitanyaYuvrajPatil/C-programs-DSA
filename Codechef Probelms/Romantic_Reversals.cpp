#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i <= k; i++)
    {
        reverse(s.begin(), s.begin() + k - i);
    }
    cout << s << endl;
    return 0;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}