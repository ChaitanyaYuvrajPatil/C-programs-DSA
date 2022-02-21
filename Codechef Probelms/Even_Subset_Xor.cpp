#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long


signed main()
{
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c,x,j=0,i=1;
        int a[1000];
        while(j!=n){
            c=0;
            x=i;
            while(x!=0){
                x = x&(x-1);
                c++;
            }
            if(c%2==0){
                a[j]=i;
                j++;
            }
            i++;
        }
        for(int i=0;i<j;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}