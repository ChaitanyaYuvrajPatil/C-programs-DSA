#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int Med(vector<int> arr, int n)
{

    int z = round(n / 2);
    return arr[z] - arr[z - 1];
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int j;
            cin >> j;
            vec.push_back(j);
        }
        sort(vec.begin(), vec.end());
        // vector<int> vec1 = {vec[0], vec[n - 1]};
        // vector<int> vec2(vec.begin() + 1, vec.end() - 1);
        cout << abs(Med(vec, n)) << endl;
        // cout << countDivisors(n - 1) << endl;
    }
    return 0;
}