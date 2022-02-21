#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

void Combination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans,vector<int>&ds)
{
    if(target == 0){
        ans.push_back(ds);
        return;
    }
    for(int i=ind;i<arr.size();i++){
        if(i>ind && arr[i] == arr[i-1]) continue;
        if(arr[i] > target) break;
        ds.push_back(arr[i]);
        Combination(i+1,target-arr[i],arr,ans,ds);
        ds.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> ds;
    Combination(0, target, candidates, ans, ds);
    return ans;
}
