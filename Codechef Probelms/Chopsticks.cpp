#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, d, ct = 0;
    cin >> n >> d;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        vec.push_back(j);
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < n - 1;)
    {
        if (vec[i + 1] - vec[i] <= d)
        {
            ct=ct+1;
            i = i + 2;
        }else{
            i++;
        }
    }
    cout << ct << endl;
    return 0;
}
signed main()
{

    solve();

    return 0;
}