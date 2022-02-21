#include <bits/stdc++.h>
using namespace std;
void get_Array(int N, int K)
{
    if (N == 1)
    {
        cout << K;
        return;
    }
    if (N == 2)
    {
        cout << 0 << " " << K;
        return;
    }
    if (N == 3 && K == 1)
    {
        cout << 5 << " " << 6 << " " << 2;
        return;
    }
    int A = N - 2;
    int B = N - 1;
    int VAL = 0;
    for (int i = 1; i <= (N - 3); i++)
    {
        cout << i << " ";
        VAL ^= i;
    }
    if (VAL == K)
    {
        cout << A << " " << B << " " << (A ^ B);
    }
    else
    {
        cout << 0 << " " << A << " " << (A ^ K ^ VAL);
    }
}
int solve()
{
    int N, X;
    cin >> N >> X;
    get_Array(N, X);
    cout << endl;
    return 0;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}