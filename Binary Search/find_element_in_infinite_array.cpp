#include <bits/stdc++.h>
using namespace std;
#define int long long

int binary_search(int nums[], int target, int start, int end)
{
    // int start = 0, end = vec.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

    int solve(int arr[], int target)
    {
        int start = 0;
        int end = 1;
        while (target > arr[end])
        {
            int temp = end + 1;
            end = end + (end - start + 1) * 2;
            start = temp;
        }
        return binary_search(arr, target, start, end);
    }

    signed main()
    {
        int arr[] = {3, 5, 9, 10, 90, 100, 200, 300, 400};
        int target = 90;
        cout << solve(arr, target) << endl;
        return 0;
    }
