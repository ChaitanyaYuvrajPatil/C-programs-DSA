#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(string haystack, string needle)
{
    if (needle == "")
    {
        return 0;
    }
    int find = haystack.find(needle);
    if (find != haystack)
    {
        return final;
    }
    return -1;
}

signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}