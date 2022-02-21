#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    vector<int> a;
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n; i++)
    {
        int j;
        cin >> j;
        a.push_back(j);
    }
    sort(a.begin(), a.end());
    int mex = 1;
    for (auto &e : a)
    {
        if (e == mex)
        {
            mex++;
        }
    }
    if(mex>a[2*n-1]){

    }else if (mex<a[2*n-1])
    {
        /* code */
    }
    
    cout << mex << endl;
    return 0;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}