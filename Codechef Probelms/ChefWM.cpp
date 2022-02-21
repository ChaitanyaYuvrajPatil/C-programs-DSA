#include <bits/stdc++.h>
using namespace std;
#define int long long

int primeFactors(int n)
{
    map<int, int> mpp;
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        mpp[2]++;
        // cout << 2 << " ";
        n = n / 2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            mpp[i]++;
            // cout << i << " ";
            n = n / i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
    {
        // cout << n << " ";
        mpp[n]++;
    }
    return mpp.size();
}

/* Driver code */
int solve()
{
    int n, m;
    cin >> n >> m;
    int k = primeFactors(m);
    for (int i = k; i > 0; i--)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
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