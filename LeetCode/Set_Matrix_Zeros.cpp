#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    vector<vector<int>> m = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int c = m[0].size();
    int r = m.size();
    vector<int> vec_r, vec_c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (m[i][j] == 0)
            {
                vec_r.push_back(i);
                vec_c.push_back(j);
            }
        }
    }
    for (int i = 0; i < vec_r.size(); i++)
    {
        for (int k = 0; k < c; k++)
        {
            m[vec_r[i]][k] = 0;
        }
        for (int k = 0; k < r; k++)
        {
            m[k][vec_c[i]] = 0;
        }
    }
    return 0;
}