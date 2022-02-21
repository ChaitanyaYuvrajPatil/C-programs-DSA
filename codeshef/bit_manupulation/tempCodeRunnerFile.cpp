#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n)
    {
        int i;
        cin >> i;
        if (i >= 2000)
        {
            cout << 1 << endl;
        }
        if (i >= 1600 && i < 2000)
        {
            cout << 2 << endl;
        }
        if (i < 1600)
        {
            cout << 3 << endl;
        }
        n--;
    }
}