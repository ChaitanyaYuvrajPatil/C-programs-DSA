#include <bits/stdc++.h>
using namespace std;
#define int long long

int solve(string s)
{
    int len = s.size();
    stack<char> st;

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            else if (s[i] == ')' && st.top() != '(')
            {
                return false;
            }
            else if (s[i] == '}' && st.top() != '{')
            {
                return false;
            }
            else if (s[i] == ']' && st.top() != '[')
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
    }
    if (st.empty())
        return true;
    else
        false;
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