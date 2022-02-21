#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long

int N = 501;
vector<int> ans(N,0);

bool isPossible(int i,int can){
    int len =1,sum= can;
}

int solve()
{
    ans[0] = 1;
    for(int i=1;i<N;i++){
        int can = ans[i-1];
        while(!isPossible(i,can)){
            can++;
        }
        ans[i] = can;
    }
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