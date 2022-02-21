#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//#define int long long

void fun(int ind, vector<int> &ds, int arr[], int n)
{
    if (ind == n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    ds.push_back(arr[ind]);
    fun(ind + 1, ds, arr, n);
    ds.pop_back();
    fun(ind + 1, ds, arr, n);
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int vec[n];
        vector<int>vec1;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        fun(0, vec1, vec, n);
    }
    return 0;
}