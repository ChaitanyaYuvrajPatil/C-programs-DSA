#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

int ct = 0;
void printSubstrings(string str)
{

    for (int i = 0; i < str.length(); i++)
    {
        string subStr;
        for (int j = i; j < str.length(); j++)
        {
            subStr += str[j];
            if (subStr[0] == '1' & subStr[subStr.length() - 1] == '1')
            {
                ct = ct + 1;
            }
            // cout << subStr << endl;
        }
    }
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int ct1 = 0;
        int end_1;
        cin >> n;
        string s1;
        cin >> s1;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == '1')
                ct1++;
        }
        end_1 = (ct1 * (ct1 + 1)) / 2;
        cout << end_1 << endl;
        ct1 = 0;
        //printSubstrings(s1);
        //cout << ct << endl;
    }
    return 0;
}