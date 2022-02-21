#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, min_1 = INT_MAX;
        vector<int> vec;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int r;
            cin >> r;
            vec.push_back(r);
        }
        sort(vec.begin(), vec.end());
        for (int i = 1; i < n; i++)
        {
            min_1 = min(min_1, vec[i] - vec[i - 1]);
        }
        cout << min_1 << endl;
    }
    return 0;
}
