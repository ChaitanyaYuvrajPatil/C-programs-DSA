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
        int N, K, W = 0, W1 = 0, W2 = 0, L1, L2;
        vector<int> vec;
        cin >> N >> K;
        for (int i = 0; i < N; i++)
        {
            int j;
            cin >> j;
            vec.push_back(j);
            W = W + j;
        }
        sort(vec.begin(), vec.end());
        for (int i = 0; i < K; i++)
        {
            W1 = W1 + vec[i];
        }
        for (int i = vec.size() - 1;; i--)
        {
            W2 = W2 + vec[i];
            K--;
            if (K == 0)
            {
                break;
            }
        }
        L1 = W - W1;
        L2 = W - W2;
        cout << max(abs(L1 - W1), abs(L2 - W2)) << endl;
    }
    return 0;
}