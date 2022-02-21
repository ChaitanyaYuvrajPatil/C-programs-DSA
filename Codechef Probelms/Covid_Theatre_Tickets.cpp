#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int N, M, j, k;
    cin >> N >> M;
    j = N / 2;
    N = N - j;
    k = M / 2;
    M = M - k;
    cout << N * M << endl;
    return 0;
}

signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}