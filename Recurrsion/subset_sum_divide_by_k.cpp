#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
int k = 0;
void fun(int ind, vector<int> &ds, int arr[], int n, int sum)
{
    if (ind == n)
    {
        if (ds.size() != 0 && sum % k == 0)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    sum += arr[ind];
    // pick up
    fun(ind + 1, ds, arr, n, sum);
    ds.pop_back();
    sum -= arr[ind];
    // Not pickup
    fun(ind + 1, ds, arr, n, sum);
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
        fun(0, vec1, vec, n, 0);
    }
    return 0;
}