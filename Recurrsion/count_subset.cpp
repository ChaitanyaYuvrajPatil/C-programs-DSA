#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
int k = 0;
int fun(int ind, int arr[], int n, int sum)
{
    if (ind == n)
    {
        if (sum % k == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
       // return 0;
    }
    sum += arr[ind];
    // pick up
    int f = fun(ind + 1, arr, n, sum);
    sum -= arr[ind];
    // Not pickup
    int g = fun(ind + 1, arr, n, sum);
    return f + g;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        k = m;
        int vec[n];
        vector<int> vec1;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        cout << fun(0, vec, n, 0)-1 << endl;
    }
    return 0;
}