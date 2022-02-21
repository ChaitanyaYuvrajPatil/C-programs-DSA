#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int s1 = 0, s2 = 0, mn = INT_MAX;
    vector<int> vec;
    string s;
    cin >> s;
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        if (s[i] == '(')
        {
            s1 = s1 + 1;
        }
        else
        {
            vec.push_back(s1);
            s1 = 0;
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] > 0)
        {
            mn = min(mn, vec[i]);
        }
    }
    cout << mn << endl;
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