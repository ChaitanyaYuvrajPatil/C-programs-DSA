#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void check()
{
    string s;
    cin >> s;
    bool flag = 0;
    for (int i = 0; i < s.length() - 4; i++)
    {
        string sub(s.begin() + i, s.begin() + i + 3);
        if (sub == "010" || sub == "101")
        {
            flag = 1;
        }
    }
    if (flag)
        cout << "Good" << endl;
    else
        cout << "Bad" << endl;
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