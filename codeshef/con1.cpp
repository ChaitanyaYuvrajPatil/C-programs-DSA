#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, n_o_p, ct = 0;
        cin >> n;
        n_o_p = n + 1;
        string s1;
        cin >> s1;
        cin >> x >> y;
        for (int i = 0; i < n + 1; i++)
        {
            for (int k = 0; k < i; k++)
            {
                if (s1[i] == 'E')
                {
                    s1[i] = 'W';
                    if (x > y)
                    {
                        ct += y;
                    }
                    else
                    {
                        ct += x;
                    }
                }
            }

            for (int j = i; j < n; j++)
            {
            }
        }
    }
}
/*
        vector<int> v1, v2, v3;
        int n, mn = 10000;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            v1.push_back(m);
        }
        for (int i = 0; i < n - 1; i++)
        {
            int m;
            cin >> m;
            v2.push_back(m);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        v3 = v1;
        for (int i = 0; i < n; i++)
        {
            int ct = 0;
            v3.erase(v3.begin() + i);
            for (int j = 0; j < v3.size(); j++)
            {
                if ((v2[j] - v3[j] == v2[j + 1] - v3[j + 1]) > 0)
                {
                    ct++;
                }
                else
                {
                    break;
                }
            }
            if ((ct == n - 2) && ((v2[0] - v3[0]) > 0))
            {
                mn = min(mn, v2[0] - v3[0]);
            }
            v3.clear();
            v3 = v1;
        }
        cout << mn << endl;
*/
/*
 int n, k, sum;
        cin >> n >> k >> sum;
        cout << (sum - n * n) / (k - 1) << "\n";
*/
/*
int n, k, sum = 0;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int it;
            cin >> it;
            v.push_back(it);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < k; i++)
        {
            if (v[i] > 0)
                break;
            v[i] = v[i] * (-1);
        }
        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (v[i] < 0)
                break;
            sum = sum + v[i];
        }
        cout << sum << endl;
*/
/*
int n, k, s, it = 1, sum = 0;
        cin >> n >> k >> s;
        int arr[n + k - 1 ];
        int size = n + k - 1;
        for (int i = 0; i < n; i++)
        {
            arr[i] = it;
            sum += it;
            it = it + 2;
        }
        //cout << sum << endl;
        int sm = sum, t = 0;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < k; j++)
            {
                sm = sm + arr[i];
                if (sm == s)
                {
                    cout << arr[i] << endl;
                    t++;
                    break;
                }
            }
            if (t > 0)
                break;
            sm = sum;
        }
*/
/*
int a, b, c;
        cin >> a >> b >> c;

        if ((b < a) && (b < c))
        {
            cout << "Bob" << endl;
        }
        else if ((c < a) && (c < b))
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
*/
/*
int n, k, mx = -1e9;
        cin >> n >> k;
        int arr[n+1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }
        long long d = 0;
        for (int i = k; i <= n; i++)
        {
            if (mx == arr[i])
            {
                d += n + 1 - i;
            }
        }
        cout << d << endl;
*/
/*
int n, mx = 0, ct = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }
        int l, ind;
        if (arr[0] == mx)
        {
            for (int i = 0; i < n; i++)
            {
                l = arr[i + 1];
                for (int j = i + 1; j < n; j++)
                {
                    if (l < arr[j])
                    {
                        ind = j;
                        l = arr[j];
                    }
                }
                if (ind > i)
                {
                    i = ind;
                    ct++;
                }
                else
                {
                    ct = -1;
                    break;
                }
            }
            cout << ct << endl;
        }
        else
        {
            cout << -1 << endl;
        }
*/
/* int a, b;
        cin >> a >> b;
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        if ((a == arr[0] && b == arr[1]) || (a == arr[1] && b == arr[0]))
        {
            cout << 1 << endl;
        }
        else if ((a == arr[2] && b == arr[3]) || (a == arr[3] && b == arr[2]))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 0 << endl;
        }*/