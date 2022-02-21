#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

int solve(string a, string b)
{
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int n = a.size();
    int m = b.size();
    if (n < m)
    {
        while (n < m)
        {
            a += '0';
            n++;
        }
    }
    if (m < n)
    {
        while (m < n)
        {
            b += '0';
            m++;
        }
    }
    // int i=0,j=0;
    int carr = 0;
    string ans;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0' && b[i] == '0' && carr == 0)
        {
            ans += '0';
            carr = 0;
        }
        else if (a[i] == '0' && b[i] == '1' && carr == 0)
        {
            ans += '1';
            carr = 0;
        }
        else if (a[i] == '0' && b[i] == '0' && carr == 1)
        {
            ans += '1';
            carr = 0;
        }
        else if (a[i] == '0' && b[i] == '1' && carr == 1)
        {
            ans += '0';
            carr = 1;
        }
        else if (a[i] == '1' && b[i] == '0' && carr == 0)
        {
            ans += '1';
            carr = 0;
        }

        else if (a[i] == '1' && b[i] == '0' && carr == 1)
        {
            ans += '0';
            carr = 1;
        }
        else if (a[i] == '1' && b[i] == '1' && carr == 0)
        {
            ans += '0';
            carr = 1;
        }
        else if (a[i] == '1' && b[i] == '1' && carr == 1)
        {
            ans += '1';
            carr = 1;
        }
    }
    if (carr != 0)
    {
        ans += '1';
    }
    reverse(ans.begin(), ans.end());
    return ans;
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