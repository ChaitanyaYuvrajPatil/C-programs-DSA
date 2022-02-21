#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <math.h>

int divide_without(int divident, int diviser)
{
    long d = 1, quetient = 0;

    if (divident < 0 && diviser < 0)
    {
        d = d;
    }
    else if (divident < 0 || diviser < 0)
    {
        d = -d;
    }
    divident = abs(divident);
    diviser = abs(diviser);

    while (divident >= diviser)
    {
        divident -= diviser;
        ++quetient;
    }
    if (d < 0)
    {
        quetient = -quetient;
    }
    return quetient;
}

int main()
{

    cout << divide_without(-2147483648, -1);
    /*int n, rem, pal = 0, m;
    cin >> n;
    m = n;
    if (m < 0)
    {
        cout << " Not  palindrome";
    }
    while (n != 0)
    {
        rem = n % 10;
        pal = pal * 10 + rem;
        n = n / 10;
    }

    if (pal == m)
    {
        cout << pal << " palindrome";
    }
    else
    {
        cout << " Not  palindrome";
    }*/

    /*const int N = 1e6 + 2;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            check[a[i]] = 1;
        }
    }

    int ans = -1;
    for (int i = 1; i < n; i++)
    {
        if (check[i] == false)
        {
            ans = i;
            break;
        }
    }

    cout << ans << endl;*/
    return 0;
}