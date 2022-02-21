#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m,gcd=0;
        cin >> n >> m;
        int arr[n][m];
        cout << n << " " << m << endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                gcd = gcd + arr[i][j];
            }
        }
    }
    return 0;
}