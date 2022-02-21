#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int P, M, V;
        cin >> P >> M >> V;
        cout << (M - P + 1) * V << "\n";
    }
    return EXIT_SUCCESS;
}
