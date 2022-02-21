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
        int N, X, sum = 0;
        vector<int> vec;
        cin >> N >> X;
        for (int i = 0; i < N; i++)
        {
            int j;
            cin >> j;
            vec.push_back(j);
            sum = sum + j;
        }
        sort(vec.begin(), vec.end());
        int y, z;
        y = sum / X;
        z = (sum - vec[0]) / X;
        if (y == z)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
    return 0;
}