#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int solve()
{
    int n;
    cin >> n;
    int a[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int mx = *max_element(a, a + n);
    double p = (double)(sum - mx) / (n - 1);
    p += mx;
    cout << fixed << setprecision(10) << p << endl;
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