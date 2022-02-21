#include <bits/stdc++.h>
using namespace std;
#define int long long

int main()
{
    int row_num;
    vector<vector<int>>r(row_num);

    for(int i=0;i<row_num;i++){
        r[i].resize(i+1);
        r[i][0] = r[i][i] =1;

        for(int j=1;j<i;j++){
            r[i][j] = r[i-1][j-1] + r[i-1][j];
        }
    }
    return r;
    return 0;
}