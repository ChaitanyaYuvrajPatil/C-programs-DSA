#include <bits/stdc++.h>
using namespace std;
#define int long long

int main()
{
    vector<vector<int>> matrix = [ [ 1, 3, 5, 7 ], [ 10, 11, 16, 20 ], [ 23, 30, 34, 60 ] ];
    int target = 13;
    if (matrix.size() == 0)
    {
        return false;
    }
    int n = matrix.size();
    int m = matrix[0].size();

    int low = 0;
    int high = (n * m) - 1;

    while (low <= high)
    {
        int mid = (low + (high - low) / 2);

        if (matrix[mid / m][mid % m] == target)
        {
            return true;
        }
        if (matrix[mid / m][mid % m] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
    return 0;
}