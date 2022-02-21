#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char f, s, T, o1, o2;
        cin >> f >> s >> T;
        cin >> o1 >> o2;

        if (f == o1 || f == o2)
        {
            cout << f << endl;
        }
        else if (s == o1 || s == o2)
        {
            cout << s << endl;
        }
        else
        {
            cout << T << endl;
        }
    }
    return EXIT_SUCCESS;
}
