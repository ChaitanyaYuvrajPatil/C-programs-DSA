#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
class RangeFreqQuery
{
private:
    unordered_map<int, vector<int>> mpp;

public:
    RangeFreqQuery(vector<int> &arr)
    {
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]].push_back(i);
        }
    }

    int query(int left, int right, int value)
    {
        vector<int> &vec = mpp[value];
        int lb = lower_bound(vec.begin(),vec.end(),left) - vec.begin();
        int ub = upper_bound(vec.begin(),vec.end(),right) - vec.begin();
        return ub-lb;
    }
};