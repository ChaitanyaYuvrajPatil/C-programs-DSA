#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(vector<int> nums)
{
    int start = 0;
    int end = nums.size()-1;

    while(start < end){
        int mid = start + (end-start)/2;
        if(nums[mid] > nums[mid+1]){
            end = mid;
        }else{
            start = mid+1;
        }
    }
    return end;
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