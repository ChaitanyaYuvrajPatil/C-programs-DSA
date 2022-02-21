#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, min = INT_MAX;
        cin >> n;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int j;
            cin >> j;
            sum = sum + j;

            if (j < min)
            {
                min = j;
            }
        }
        cout <<sum - min*n<< endl;
        
    }
    return 0;
}