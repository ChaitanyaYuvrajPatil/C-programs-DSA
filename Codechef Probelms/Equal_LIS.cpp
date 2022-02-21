#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long

int solve()
{
    int n;
    cin >> n;

    if(n>2){
        deque<int> three,four;

        three.push_back(1);
        three.push_back(3);
        three.push_back(2);

        four.push_back(2);
        four.push_back(1);
        four.push_back(4);
        four.push_back(3);

        vector<in>ans;

        if(n&1){
            for(int i=4;i<=n;i+=2){
                three.push_back(i);
                three.push_back(i+1);
            }
            ans = to_v
        }
    }
    return 0;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
    }
    return 0;
}