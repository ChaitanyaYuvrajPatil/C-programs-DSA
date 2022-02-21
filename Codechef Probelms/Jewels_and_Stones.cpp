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
        int ct = 0;
        string jwel, stone;
        cin >> jwel;
        cin >> stone;

        unordered_map<char, int> m;
        for (int i = 0; i < jwel.length(); i++)
        {
            m[jwel[i]]++;
        }
        for (auto it : m)
        {
            for (int i = 0; i < stone.length(); i++)
            {
                if (it.first == stone[i])
                {
                    ct++;
                }
            }
        }
        cout << ct << endl;
    }
    return 0;
}