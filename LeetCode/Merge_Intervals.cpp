#include <bits/stdc++.h>
using namespace std;
#define int long long

int main()
{
    vector<vector<int>> intervals = [ [ 1, 3 ], [ 2, 6 ], [ 8, 10 ], [ 15, 18 ] ];
    vector<vector<int>> merged_interval;
    if(intervals.size() == 0){
        return merged_interval;
    }

    sort(intervals.begin(),intervals.end());
    vector<int> temp = intervals[0];

    for(auto it : intervals){
        if(it[0] <= temp[1]){
            temp[1] = max(it[1],temp[1]);
        }else{
            merged_interval.push_back(temp);
            temp = it;
        }
    }
    merged_interval.push_back(temp);
    return merged_interval;


    return 0;
}