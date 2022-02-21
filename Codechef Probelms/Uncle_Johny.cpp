#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, num;
        vector<int> vec;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int r;
            cin >> r;
            vec.push_back(r);
        }
        cin >> k;
        num = vec[k - 1];
        sort(vec.begin(), vec.end());
        for (int i = 0; i < n; i++)
        {
            if (vec[i] == num)
            {
                cout << i + 1 << endl;
            }
        }
    }
    return 0;
}
