#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string f, s;
    cin >> f >> s;

    if (f == s)
    {
        cout << f << endl;
    }

    else if (f == "R" || s == "R")
    {
        cout << "R" << endl;
    }
    else
    {
        cout << "B" << endl;
    }
    return EXIT_SUCCESS;
}
