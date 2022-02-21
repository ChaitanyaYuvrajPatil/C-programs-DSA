#include <bits/stdc++.h>
using namespace std;
#define int long long

int first_last(vector<int> nums, int target, bool findStartIndex)
{
    int ans = -1;
    int start = 0, end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] < target)
        {
            start = mid + 1
            ;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            if (findStartIndex)
                end = mid - 1;
            else
                start = mid + 1;
        }
    }
    return ans;
    // cout << vec[end] << endl;
}
int solve(vector<int> nums, int target)
{
    vector<int> ans = {-1, -1};
    int start = first_last(nums, target, true);
    int end = first_last(nums, target, false);
    ans[0] = start;
    ans[1] = end;
    return ans;
}

signed main()
{
    vector<int> vec = {2, 3, 5, 9, 14, 16, 18};
    while (t--)
    {
        solve(vec, 15);
    }
    return 0;
}