#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int D, L, R;
        cin >> D >> L >> R;

        if (L <= D & D <= R)
        {
            cout << "Take second dose now"
                 << "\n";
        }
        else
        {
            if (D < L)
            {
                cout << "Too Early"
                     << "\n";
            }
            else
            {
                cout << "Too Late"
                     << "\n";
            }
        }
    }
    return EXIT_SUCCESS;
}
