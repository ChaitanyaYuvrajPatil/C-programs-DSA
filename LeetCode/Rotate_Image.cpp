#include <bits/stdc++.h>
using namespace std;
#define int long long

int main()
{
    vector<int> m = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = m.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(m[i][j], m[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(m[i].begin(), m[i].end());
    }

    return 0;
}