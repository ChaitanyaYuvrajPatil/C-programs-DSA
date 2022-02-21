#include <bits/stdc++.h>
using namespace std;
#define int long long

int term(int N, int K)
{
    int j, a0;
    if (K % N != 0)
    {
        j = N / K + 1;
    }
    else
    {
        j = N / K;
    }
    a0 = K - (j - 1) * N;
    return a0;
}
int solve()
{
    int N, K;
    cin >> N >> K;
    vector<int> vec1, vec2;
    for (int i = 1; i <= N; i++)
    {
        vec1.push_back(i);
    }

    if (K < N)
    {
        K = K;
    }
    else
    {
        K = term(N, K);
        /*if (K % N != 0)
        {
            K = N / K + 1;
        }
        else
        {
            K = N / K;
        }*/
    }
    while (K--)
    {
        for (int i = 0; i < N - 1; i = i + 2)
        {
            vec2.push_back(vec1[i]);
        }
        for (int i = 1; i < N; i = i + 2)
        {
            vec2.push_back(vec1[i]);
        }
        vec1.clear();
        vec1 = vec2;
        vec2.clear();
    }
    for (auto it : vec1)
    {
        cout << it << " ";
    }
    cout << "\n";
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