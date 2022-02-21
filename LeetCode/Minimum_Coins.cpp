#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(int v)
{
    int arr[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int n = 9, result = 1;
    int j = n - 1;
    vector<int> m;
    while (result)
    {
        if (v == 0)
        {
            result = 0;
        }
        if (v < arr[j])
            j--;
        if (v >= arr[j])
        {
            v -= arr[j];
            m.push_back(arr[j]);
        }
    }
    for (int i = 0; i < m.size(); i++)
    {
        cout << m[i] << endl;
    }
    return 0;
}

signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;
    solve(1005);

    return 0;
}