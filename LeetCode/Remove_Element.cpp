#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(vector<int>nums,int val)
{
    vector<int>:: iterator it;
    it = nums.begin();
    for(int i=0;i<nums.size();i++){
        if(nums[i] == val){
            nums.erase(it);
            it--;
            i--;
        }
        it++;
    }
    return nums.size();
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