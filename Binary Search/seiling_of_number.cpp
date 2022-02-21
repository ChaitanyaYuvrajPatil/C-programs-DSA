#include <bits/stdc++.h>
using namespace std;
#define int long long

// seiling means smallest number greater than equal to target number
int solve(vector<int> vec, int target)
{
    if (target > vec.size() - 1)
    {
        cout << "Not Exist" << endl;
        return 0;
    }
    int start = 0, end = vec.size() - 1;
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
    cout << vec[start] << endl;
    return 0;
}

signed main()
{
    int t;
    cin >> t;
    vector<int> vec = {2, 3, 5, 9, 14, 16, 18};
    while (t--)
    {
        solve(vec, 15);
    }
    return 0;
}