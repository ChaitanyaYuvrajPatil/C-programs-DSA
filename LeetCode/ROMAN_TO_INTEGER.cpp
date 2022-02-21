#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(string s)
{
    map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    map<char, int> ;;iterator itr;
    int i =s.size()-1;
    int num =0,p=0;
    while(i>=0){
        itr = m.find(s[i]);
        if(itr->second >=p){
            num+=itr->second;
            p = itr->second;
        }else{
            num-=itr->second;
        }
        i--
    }
    return num;
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