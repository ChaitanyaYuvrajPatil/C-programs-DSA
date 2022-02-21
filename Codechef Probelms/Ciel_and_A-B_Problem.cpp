#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b;
    n = (a - b);
    if (n == 1)
        cout << n + 1 << endl;
    else if ((n % 10) == 0)
        cout << n + 1 << endl;
    else
        cout << n - 1 << endl;
}