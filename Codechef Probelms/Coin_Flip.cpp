#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int G;
        cin >> G;
        while (G--)
        {
            // Head = 1, Tail =2;
            int I, N, Q;
            cin >> I >> N >> Q;
            if (N % 2 == 0)
            {
                cout << N / 2 << endl;
            }
            else if (I == Q)
            {
                cout << (N - 1) / 2 << endl;
            }
            else
            {
                cout << (N + 1) / 2 << endl;
            }
        }
    }
    return 0;
}
