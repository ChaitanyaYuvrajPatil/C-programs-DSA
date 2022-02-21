#include <bits/stdc++.h>
using namespace std;
#define int long long

int find_pivot(vector<int> &nums, int m)
{
    int start = 0;
    int end = 0;
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        start = max(start, nums[i]);
        end += nums[i];
    }

    while(start<end){
        int mid = start+(end-start)/2;
        int sum =0;
        int pieces = 1;

        for(int i=0;i<size;i++){
            if(sum+nums[i]>mid){
                sum = nums[i];
                pieces++;
            }else{
                sum+=nums[i];
            }
        }
        if(pieces >m){
            start = mid+1;
        }else{
            end=mid;
        }
    }
    return end;
}

signed main()
{
    vector<int> vec = {7,2,5,10,8};
    cout << find_pivot(vec,2)<< endl;
    return 0;
}