#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int sum(int n)
{
    return n * (n + 1) / 2;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int D, N, sum_a = 0;
        cin >> D >> N;
        for (int i = 0; i < D; i++)
        {
            N = sum(N);
        }
        cout << N << endl;
    }
    return 0;
}