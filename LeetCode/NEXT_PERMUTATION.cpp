#include <bits/stdc++.h>
using namespace std;
#define int long long

int main()
{
    vector<int> vec;
    int n = vec.size(), k, l;
    for (k = n - 2; k >= 0; k--)
    {
        if (vec[k] < vec[k + 1])
        {
            break;
        }
    }
    if(k<0){
        reverse(vec.begin(),vec.end());
    }else{
        for(l=n-1;l>k;l--){
            if(vec[l]>vec[k]){
                break;
            }
        }
        swap(vec[k],vec[l]);
        reverse(vec.begin()+k+1,vec.end());
    }
    return 0;
}