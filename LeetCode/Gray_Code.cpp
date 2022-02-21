#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

int solve(int n)
{
    vector<int> vec;
    vec.push_back(0);
    if (n == 0)
        return vec;
    vec.push_back(1);
    int cur = 1;
    for(int i=2;i<=n;i++){
        cur*=2;
        for(int j= vec.size()-1;j>=0;j--){
            vec.push_back(cur+vec[j]);
        }
    }
    return vec;
    return 0;
}

signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}