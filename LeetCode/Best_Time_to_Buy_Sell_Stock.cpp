#include <bits/stdc++.h>
using namespace std;
#define int long long

int main()
{
    int pr = 0, mn = INT_MAX;
    int sum = 0;
    vector<int> nums = {7, 1, 5, 3, 6, 4};
    for (auto it : nums)
    {
        mn = min(mn, it);
        pr = max(pr, it - mn);
    }
    cout << pr << endl;
    return 0;
}