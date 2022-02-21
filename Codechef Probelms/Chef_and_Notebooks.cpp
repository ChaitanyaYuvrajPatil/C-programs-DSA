#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y, K, N, Need;
        string s1 = "UnluckyChef";
        cin >> X >> Y >> K >> N;
        Need = X - Y;
        while (N--)
        {
            int P, C;
            cin >> P >> C;
            if (P >= Need & C <= K)
            {
                s1 = "LuckyChef";
            }
        }
        cout << s1 << endl;
    }
    return EXIT_SUCCESS;
}
