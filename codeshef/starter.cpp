#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int mod = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        map<int, int> mp;
        // vector<int> arr;
        for (int i = 0; i < N; i++)
        {
            int j;
            cin >> j;
            mp[j]++;
        }
        int mul = 1;
        for (auto it : mp)
        {
            mul = mul * (it.second + 1);
            mul = mul % mod;
        }
        cout << (mul - 1 + mod) % mod << "\n";
    }
    return 0;
}

// https://www.codechef.com/START19C/problems/ALTERSUM