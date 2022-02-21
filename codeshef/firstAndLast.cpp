#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int sumFAL(string s)
{
    int sm;
    sm = (s[0] - '0') + (s[s.size() - 1] - '0');
    return sm;
}

int main()
{
    int n;
    vector<int> v;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        v.push_back(sumFAL(s));
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}