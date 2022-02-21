#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <set>
using namespace std;
string solve()
{
    set<string> s1;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        string j;
        cin >> j;
        s1.insert(j);
    }
    for(int i=0;i<m;i++)
    {
        int num =i;
        string bin = "";
        while(num)
        {
            bin += to_string(num%2);
            num /=2;
        }
        reverse(bin.begin(),bin.end());

        int cur = bin.size();
        string res = string(m-cur,'0');
        res+=bin;

        if(s1.find(res) == s1.end())
        {
            cout<<res <<endl;
            break;
        }
    }
}
int main()
{
    int n, mx = 0;
    cin >> n;
    while (n--)
    {
        cout << solve() << endl;
    }
    /*int n;
    int siz, ct1 = 0, ct2 = 0;
    string s1, s2;
    cin >> n;
    while (n--)
    {
        ct1 = 0, ct2 = 0;
        cin >> siz;
        cin >> s1 >> s2;
        for (int i = 0; i < siz; i++)
        {
            if (s1[i] == '1')
            {
                ct1++;
            }
            if (s2[i] == '1')
            {
                ct2++;
            }
        }
        cout << min(min(ct1, ct2), siz / 2) << endl;
    }*/
}