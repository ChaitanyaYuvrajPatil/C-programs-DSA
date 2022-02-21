#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(int n)
{
    if(n<=2){
        return n;
    }
    int x =1, y =2;
    for(int i=3;i<n;++i){
        int temp = y;
        y+=x;
        x = temp;
    }
    return x+y;
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