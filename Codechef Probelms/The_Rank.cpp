#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t, Thomus;
    vector<int> vec;
    cin >> t;
    while (t--)
    {
        int M1, M2, M3, M4, sum;
        cin >> M1 >> M2 >> M3 >> M4;
        sum = M1 + M2 + M3 + M4;
        vec.push_back(sum);
    }
    Thomus = vec[0];
    //cout << Thomus << endl;
    sort(vec.rbegin(), vec.rend());
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == Thomus)
        {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}