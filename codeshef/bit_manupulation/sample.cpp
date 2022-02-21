#include <bits/stdc++.h>
#define ll Long Long
#define int Long Long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long T;
    cin >> T;
    while (T--)
    {
        long long n, k, x, i;
        cin >> n >> k >> x;
        vector<long long> arr(n);
        for (i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());
        long long ans = 0;
        while (k > 0 and arr.size() > 1)
        {
            long long sz = arr.size();
            long long sum = arr[sz - 1] + arr[sz - 2];
            if (sum >= k)
            {
                arr.pop_back();
                arr.pop_back();
                ans += x;
                k--;
            }
            else
                break;
        }
        ans += accumulate(arr.begin(), arr.end(), 0LL);
        cout << ans << '\n';
    }
}