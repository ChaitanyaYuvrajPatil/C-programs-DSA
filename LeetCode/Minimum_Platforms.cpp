#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(int arr[], int dep[], int n)
{
    sort(arr, arr + n);
    sort(dep, dep + n);

    int plat_needed = 1, result = 1;
    int i = 1, j = 0;
    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            plat_needed++;
            i++;
        }
        else if (arr[i] > dep[j])
        {
            plat_needed--;
            j++;
        }
        result = max(result, plat_needed);
    }
    cout << result << endl;
    return 0;
}

signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
    int n = 6;
    solve(arr, dep, n);

    return 0;
}