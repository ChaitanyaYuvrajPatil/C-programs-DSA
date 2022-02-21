#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(vector<int> height)
{
    int mx = 0, left = 0, right = height.size() - 1;
    while (left < right)
    {
        if (height[left] < height[right])
        {
            mx = max(mx, (right - left) * height[left]);
            left++;
        }
        else
        {
            mx = max(mx, (right - left) * height[right]);
            right--;
        }
    }
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