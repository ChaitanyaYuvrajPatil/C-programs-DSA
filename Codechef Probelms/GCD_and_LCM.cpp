#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, mx, mn, GCD, LCM, remind = 10;
        cin >> a >> b;
        if (a > b)
        {
            mx = a;
            mn = b;
        }
        else
        {
            mx = b;
            mn = a;
        }
        while (remind)
        {
            remind = mx % mn;
            mx = mn;
            mn = remind;
        }
        GCD = mx;
        LCM = (a * b) / GCD;
        cout << GCD << " " << LCM << endl;
    }
    return 0;
}

/*
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return gcd(b, (a % b));
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, GCD, LCM, r;
        cin >> a >> b;
        if (a < b)
        {
            r = a;
            a = b;
            b = r;
        }
        GCD = gcd(a,b);
        LCM = (a * b) / GCD;
        cout << GCD << " " << LCM << endl;
    }
    return 0;
}

*/