#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int sub(int ind, int sm, int sum, int arr[], int n)
{
    if(sm > sum){
        return 0;  
    }
    if (ind == n)
    {
        if (sm == sum)
        {
            return 1;
        }
        return 0;
    }
    sm += arr[ind];
    int l = sub(ind + 1, sm, sum, arr, n);

    sm -= arr[ind];
    int r = sub(ind + 1, sm, sum, arr, n);
    return l + r;
}

// For Print only one subsequence

signed main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    cout << sub(0, 0, sum, arr, n) << endl;
    return 0;
}