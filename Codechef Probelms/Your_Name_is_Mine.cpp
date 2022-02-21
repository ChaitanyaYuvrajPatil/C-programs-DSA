#include <bits/stdc++.h>
using namespace std;
#define int long long

bool checkSubsequence(string str, string pattarn)
{
    int pattarnLen = pattarn.length();
    int stringLen = str.length();
    int i = 0, j = 0;
    while (i < stringLen && j < pattarnLen)
    {
        if (str[i] == pattarn[j])
        {
            j++;
        }
        i++;
    }
    if (j == pattarnLen)
        return true;
    else
        return false;
}
int solve()
{
    string pat, str;
    cin >> pat >> str;
    if (checkSubsequence(str, pat) || checkSubsequence(pat, str))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}