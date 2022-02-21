#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long

int solve()
{
    int N, M;
    string s = "", s1 = "abc";
    cin >> N;

    if (N == 2)
    {
        cout << "ab" << endl;
        return 0;
    }
    M = N % 3;
    N = N / 3;
    for (int i = 0; i < N; i++)
    {
        s += s1;
    }
    if (M == 1)
    {
        s += "a";
    }
    else if (M == 2)
    {
        s += "ab";
    }
    cout << s << endl;
    return 0;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}