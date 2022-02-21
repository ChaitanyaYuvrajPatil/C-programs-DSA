#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

void check()
{
    int X, C = 0, N = 0;
    string s;
    cin >> X;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'C')
        {
            C += 2;
        }
        if (s[i] == 'N')
        {
            N += 2;
        }
        if (s[i] == 'D')
        {
            C += 1;
            N += 1;
        }
    }
    if(C>N){
        cout<<60*X<<endl;
    }
    if(C<N){
        cout<<40*X<<endl;
    }
    if(C==N){
        cout<<55*X<<endl;
    }
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        check();
    }
    return 0;
}