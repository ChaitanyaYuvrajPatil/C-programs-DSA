#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    // cin.tie(0)->sync_with_stdio(0);

    int N, K;
    cin >> N >> K;
    int candies[N];
    for (int i = 0; i < N; i++)
        cin >> candies[i];
    sort(candies, candies + N);
    int i = 0, j = N - 1, mn = 0, mx = 0;
    while (i <= j)
    {
        mn += candies[i];
        i++;
        j = j - K;
    }
    reverse(candies, candies + N);
    i = 0, j = N - 1;
    while (i <= j)
    {
        mx += candies[i];
        i++;
        j = j - K;
    }
    cout << mn << " " << mx << endl;
    return 0;
}