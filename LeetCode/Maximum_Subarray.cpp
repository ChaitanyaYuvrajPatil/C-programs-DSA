#include <bits/stdc++.h>
using namespace std;
#define int long long

int main()
{
    int mx = INT_MIN;
    int sum = 0;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    for (int i = 0; i < nums.size(); i++)
    {
        sum = sum + nums[i];
        mx = max(mx, sum);
        if (sum < 0)
            sum = 0;
    }
    return mx;
    return 0;
}