#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

void sub(int ind, vector<int> &ds, int sm, int sum, int arr[], int n)
{
    if (ind == n)
    {
        if (sm == sum)
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
    sm += arr[ind];
    sub(ind + 1, ds, sm, sum, arr, n);

    ds.pop_back();
    sm -= arr[ind];
    sub(ind + 1, ds, sm, sum, arr, n);
}

// For Print only one subsequence
bool sub_1(int ind, vector<int> &ds, int sm, int sum, int arr[], int n)
{
    if (ind == n)
    {
        if (sm == sum)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        return false;
    }
    ds.push_back(arr[ind]);
    sm += arr[ind];
    if (sub_1(ind + 1, ds, sm, sum, arr, n) == true)
    {
        return true;
    }
    // sub(ind + 1, ds, sm, sum, arr, n);

    ds.pop_back();
    sm -= arr[ind];
    if (sub_1(ind + 1, ds, sm, sum, arr, n) == true)
    {
        return true;
    }
    return false;
}
signed main()
{

    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    sub_1(0, ds, 0, sum, arr, n);
    return 0;
}