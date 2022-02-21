#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

int solve(vector<int> nums)
{
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[j] = nums[i];
            j++;
        }
    }
    for (int i = j; i < nums.size(); i++)
        nums[j] = 0;
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