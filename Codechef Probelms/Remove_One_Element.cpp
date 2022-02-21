#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, sum = 0, min_1 = INT_MAX, min_2 = INT_MAX;
    cin >> t;
    while (t--)
    {
        vector<int> A, B;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int j;
            cin >> j;
            A.push_back(j);
        }
        for (int i = 0; i < n - 1; i++)
        {
            int j;
            cin >> j;
            B.push_back(j);
            sum = sum + j;
        }
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        for (int i = 0; i < n; i++)
        {
            int sum_2 = 0;
            vector<int> C(A.begin(), A.end());
            C.erase(C.begin() + i);
            int m2 = 0;
            for (int j = 0; j < n - 1; j++)
            {
                int m1 = B[j] - C[j];
                if (min_1 == INT_MAX)
                {
                    min_1 = min(min_1, m1);
                    m2 = min_1;
                }
                else
                {
                    if (m1 == m2)
                    {
                        min_1 = min(min_1, m1);
                    }
                    else
                    {
                        min_1 = -1;
                        break;
                    }
                }
            }
            if (min_1 > 0)
            {
                min_2 = min(min_1, min_2);
            }
        }
        cout << min_2 << endl;
    }
    return EXIT_SUCCESS;
}

// https://www.codechef.com/problems/REMONE
