#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve()
{
    int DSA_d, TOC_d, DM_d;
    int DSA_s, TOC_s, DM_s;
    cin >> DSA_d >> TOC_d >> DM_d;
    cin >> DSA_s >> TOC_s >> DM_s;
    int total_d = DSA_d + TOC_d + DM_d;
    int total_s = DSA_s + TOC_s + DM_s;
    if (total_d > total_s)
        cout << "Dragon" << endl;
    else if (total_d < total_s)
        cout << "Sloth" << endl;
    else
    {
        if (DSA_d == DSA_s && TOC_d == TOC_s && DM_d == DM_s)
        {
            cout << "Tie" << endl;
            return 0;
        }
        if (DSA_d > DSA_s)
        {
            cout << "Dragon" << endl;
            return 0;
        }
        else if (DSA_d < DSA_s)
        {
            cout << "Sloth" << endl;
            return 0;
        }
        if (TOC_d > TOC_s)
        {
            cout << "Dragon" << endl;
            return 0;
        }
        else if(TOC_d < TOC_s)
        {
            cout << "Sloth" << endl;
            return 0;
        }
        if (DM_d > DM_s)
        {
            cout << "Dragon" << endl;
            return 0;
        }
        else if(DM_d < DM_s)
        {
            cout << "Sloth" << endl;
            return 0;
        }
    }
    return 0;
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