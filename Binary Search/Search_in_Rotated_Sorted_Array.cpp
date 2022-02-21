#include <bits/stdc++.h>
using namespace std;
#define int long long
int find(vector<int> vec, int start, int end, int target)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (vec[mid] == target)
        {
            return mid;
            // start = mid;
            // break;
        }
        else if (vec[mid] < target)
        {
            start = mid + 1;
        }
        else if (vec[mid] > target)
        {
            end = mid - 1;
        }
    }
    // cout << vec[start] << endl;
    return -1;
}
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
    vector<int> vec = {4,5,6,7,0,1,2};
    int end = find_pivot(vec);
    int start = 0;
    int first = find(vec, start, end, target);
    int second = find(vec, end + 1, vec.size()-1, target);
    if (first == -1 && second == -1)
    {
        cout << -1 << endl;
    }
    else if (first == -1)
    {
        cout << second << endl;
    }
    else
    {
        cout << first << endl;
    }
    return 0;
}