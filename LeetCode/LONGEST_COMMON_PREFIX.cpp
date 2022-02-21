#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    string s = "";
    if (str.size() == 1)
    {
        return str[0];
    }
    string k = str[0];
    string new_string;
    for(int i=1;i<str.size();i++){
        string m =str[i];
        for(int j=0;j<m.size();j++){
            if(k[j] == m[j]){
                new_string+=k[j];
            }else{
                break;
            }
        }
        k= new_string;
        new_string.clear();
    }
    s=k;
    return s;
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