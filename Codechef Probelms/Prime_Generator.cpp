#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        if (m < 2)
            m = 2;

        for (int i = m; i <= n; i++)
        {
            if (isPrime(i))
                cout << i << "\n";
        }
        cout << "\n";
    }
    return 0;
}
