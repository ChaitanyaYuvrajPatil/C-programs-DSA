#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int sub(int ind)
{
    if (ind < 0)
    {
        return 0;
    }
    if (ind == 0)
    {
        return 1;
    }
    int l = sub(ind - 1);

    int r = sub(ind - 2);
    return l + r;
}

int sub2(int ind, int n)
{
    if (ind > n)
        return 0;
    if (ind == n )
    {
        return 1;
    }
    int l = sub2(ind + 1, n);
    int r = sub2(ind + 2, n);
    return l + r;
}
// For Print only one subsequence

signed main()
{
    cout << sub2(0,5) << endl;
    return 0;
}