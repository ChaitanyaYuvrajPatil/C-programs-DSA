#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, k, p, r;
    cin >> n >> k;
    vector<int> vec1;
    vector<int> vec2;
    for (int i = 1; i <= n; i++)
    {
        vec1.push_back(i);
    }
    if (n < 12)
    {
        if (ceil(log2(n)) == floor(log2(n)))
        {
            p = ceil(log2(n));
            if (k < p)
                r = k;
            else
                r = k % p;
        }
        else
            r = k;
    }
    else
    {
        if (ceil(log2(n)) == floor(log2(n)))
        {
            p = ceil(log2(n));
            if (k < p)
                r = k;
            else
                r = k % p;
        }
        else
        {
            p = n - 2;
            if (k > p)
                r = k % p;
            else
                r = k;
        }
    }
    while (r--)
    {
        for (int i = 0; i < n - 1; i = i + 2)
            vec2.push_back(vec1[i]);
        for (int i = 1; i < n; i = i + 2)
            vec2.push_back(vec1[i]);
        vec1.clear();
        vec1 = vec2;
        vec2.clear();
    }
    for (auto it : vec1)
        cout << it << " ";
    cout << "\n";

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