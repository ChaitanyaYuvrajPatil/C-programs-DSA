#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int divide(int n, int a, int b)
{
    int c1 = n / a;
    int c2 = n / b;
    int c3 = n / (a * b);

    return c1 + c2 - c3;
}

int gcd(int a, int b)
{
    while (b)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    /*int n, a, b;
    cin >> n >> a >> b;
    cout << divide(n, a, b);*/
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
}