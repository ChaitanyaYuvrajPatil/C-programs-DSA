#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, l = 1;
        list<int> vec, chef, assistant;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            vec.push_back(i);
        }
        for (int i = 0; i < m; i++)
        {
            int j;
            cin >> j;
            vec.remove(j);
        }

        for (auto it = vec.begin(); it != vec.end(); ++it)
        {
            if (l % 2 == 0)
            {
                assistant.push_back(*it);
                l = l + 1;
            }
            else
            {
                chef.push_back(*it);
                l = l + 1;
            }
        }
        for (auto it = chef.begin(); it != chef.end(); ++it)
            cout << *it << " ";
        cout << "\n";

        for (auto it = assistant.begin(); it != assistant.end(); ++it)
            cout << *it << " ";
        cout << "\n";
    }
    return EXIT_SUCCESS;
}
