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
        string s, result;
        cin >> s;
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            if ((s[i] >= 'a') and ('z' >= s[i]))
            {
                result += s[i];
            }
            else if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else if (s[i] == ')')
            {
                while (st.top() != '(')
                {
                    result += st.top();
                    st.pop();
                }
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        cout << result << endl;
    }
    return 0;
}