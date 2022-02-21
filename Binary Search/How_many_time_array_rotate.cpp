#include <bits/stdc++.h>
using namespace std;
#define int long long

int find_pivot(vector<int> nums)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid < end && nums[mid] > nums[mid + 1])
        {
            return mid;
        }
        if (mid > start && nums[mid] < nums[mid - 1])
        {
            return mid - 1;
        }
        if (nums[mid] <= nums[start])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

signed main()
{
    vector<int> vec = {4, 5, 6, 7, 0, 1, 2};
    cout << find_pivot(vec) + 1 << endl;
    return 0;
}