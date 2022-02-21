#include <bits/stdc++.h>
using namespace std;
#define int long long
int find(vector<int> vec,int start,int end, int target)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (vec[mid] == target)
        {
            start = mid;
            break;
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
    //cout << vec[start] << endl;
    if(vec[start] == target){
        return start;
    }
    return -1;
}
int solve(vector<int> nums,int target)
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
    cout<<find(nums,0,end,target)<<endl;
    return find(nums,0,end,target);
}

signed main()
{
    vector<int> vec = {0,1,2,4,2,1};
        solve(vec, 2);
    return 0;
}