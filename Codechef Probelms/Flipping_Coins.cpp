#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int n, k;
    cin >> n >> k;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 't';
    }
    for (int i = 0; i < k; i++)
    {
        int a, b, c,ans=0;
        cin >> a >> b >> c;
        if (a == 1)
        {
            for (int j = b; j <= c; j++)
            {
                if(arr[j] == 'h') ans++;
            }
            cout<<ans<<endl;
        }
        if(a==0){
            for (int j = b; j <= c; j++)
            {
                if(arr[j] == 'h') arr[j] = 't';
                else arr[j] = 'h';
            }
        }
    }
    //cout << result << endl;
    return 0;
}

signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    solve();

    return 0;
}