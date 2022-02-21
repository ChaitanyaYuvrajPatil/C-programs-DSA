#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(vector<int> &digits)
{
    int s = digits.size();
    vector<int>d1;
    for(int i=s-1;i>=0;i--){
        if(digits[i] !=9){
            digits[i]++;
            break;
        }else{
            digits[i] = 0;
        }
    }
    if(digits[0] ==0){
        d1.push_back(1);
        for(int i=0;i<s;i++){
            d1.push_back(digits[i]);
        }
    }
    return d1;
    return -1;
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