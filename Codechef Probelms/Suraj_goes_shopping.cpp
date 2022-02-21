#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long

int solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int j = n - 1, sum = 0;
    sort(arr, arr + n);
    while (j >= 0)
    {
        if (j == 0)
        {
            sum += arr[j];
            break;
        }
        else
        {
            sum += arr[j] + arr[j - 1];
            j = j - 4;
        }
    }
    cout << sum << endl;
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