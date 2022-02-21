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
        int n, ct = 1, r;
        vector<int> vec;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int j;
            cin >> j;
            vec.push_back(j);
        }
        r = vec[0];
        for (int i = 1; i < n; i++)
        {
            if (vec[i] < r)
            {
                ct++;
                r = vec[i];
            }
        }
        cout << ct << endl;
    }
    return 0;
}