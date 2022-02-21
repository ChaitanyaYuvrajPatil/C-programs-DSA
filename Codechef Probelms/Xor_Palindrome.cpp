#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

bool is_even(int n)
{
    if (n % 2 == 0)
        return true;
    return false;
}
bool is_odd(int n)
{
    if (n % 2 != 0)
        return true;
    return false;
}
void check()
{
    int n, one = 0, zero = 0;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            one++;
        if (s[i] == '0')
            zero++;
    }
    if (n == 1)
    {
        cout << "Yes" << endl;
        return;
    }
    if (n % 2 == 0)
    {
        if (one == n / 2 && zero == n / 2)
        {
            cout << "Yes" << endl;
        }
        else if (one % 2 == 0 && zero % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        return;
    }
    else
    {
        if (is_odd(zero))
        {
            if (is_even(one))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else
        {
            if (is_odd(one))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        check();
    }
    return 0;
}