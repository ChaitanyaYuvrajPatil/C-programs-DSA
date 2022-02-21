#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, ind = 0, sum = 0;
    cin >> n;
    int vec[n];
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        sum += vec[i];
        if (vec[i] < min)
        {
            min = vec[i];
            ind = i;
        }
    }

    int power = log2(sum);
    int diff = pow(2, power + 1) - sum;
    if (sum == pow(2, power))
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
        cout << 1 << " " << (diff / min) + 1 << endl;
        cout << ind + 1 << endl;
    }
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