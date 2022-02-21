#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

bool is_vowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        return true;
    else
        return false;
}
void solve()
{
    int n, sum = 0;
    char s1, s2;
    cin >> n;
    string S, P;
    vector<int> vowel = {'a', 'e', 'i', 'o', 'u'};
    cin >> S >> P;

    for (int i = 0; i < n; i++)
    {
        if (S[i] == '?')
        {
            S[i] = 'u';
        }
        if (P[i] == '?')
        {
            P[i] = 'u';
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (S[i] == P[i])
            continue;
        else if (is_vowel(S[i]) != is_vowel(P[i]))
            sum++;
        else
            sum += 2;
    }

    cout << sum << endl;
    return;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}