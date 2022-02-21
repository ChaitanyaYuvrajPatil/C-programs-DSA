#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(int n)
{
    set<int> myset;
    int val;
    int index;

    while (1)
    {
        val = 0;
        while (n)
        {
            index = n % 10;
            val += index * index;
            n = n / 10;
        }
        if (val == 1)
            return true;
        else if (myset.find(val) != myset.end())
            return false;
        myset.insert(val);
        n = val;
    }
    return false;
    return 0;
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