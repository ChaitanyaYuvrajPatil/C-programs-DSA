#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(vector<int> nums)
{
    int i = 0, j = 1, len = nums.size();
    if (len == 0)
        return 0;
    while (j < len)
    {
        if (nums[i] == nums[j])
        {
            j++;
        }
        else
        {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
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