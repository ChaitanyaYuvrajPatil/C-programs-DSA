#include <iostream>
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int x = 0;
    while (x != -1)
    {
        int t;
        cin >> t;
        if (t == 42)
        {
            x = -1;
        }
        if (x != -1)
        {
            cout << t << endl;
        }
    }
    return 0;
}
