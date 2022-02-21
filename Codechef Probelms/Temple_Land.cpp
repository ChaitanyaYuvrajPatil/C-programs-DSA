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
        int n, ct1 = 0, ct2 = 0;
        cin >> n;
        vector<int> vec;
        for (int i = 1; i <= n; i++)
        {
            int j;
            cin >> j;
            vec.push_back(j);
        }
        bool flag;
        if (n % 2 != 0 && vec[0] == 1)
        {
            for (int i = 0; i < n / 2; i++)
            {
                if (vec[i + 1] - vec[i] == 1)
                {
                    if (vec[i] == vec[n - 1 - i])
                    {
                        flag = 1;
                    }
                }
                else
                {
                    flag = 0;
                }
            }
        }
        else
        {
            flag = 0;
        }
        if (flag)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}