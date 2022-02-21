#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int N,i,j,u_i,u_j;
    cin >> N >> i>>j;
    u_i = (N+1)/2;
    u_j = (N+1)/2;
    if(abs(i-j)%2==0){
        cout<<0<<endl;
    }else{
        cout<<1<<endl;
    }
    /*if(abs(u_i-i)==abs(u_j-j)){
        cout<<0<<endl;
    }
    else if((u_i-i == 0 && abs(u_j-j)%2 == 0 ) ||( u_j-j==0 && abs(u_i-i)%2 == 0 ) ){
        cout<<0<<endl;
    }else{
        cout<<1<<endl;
    }*/
    //cout << N * M << endl;
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