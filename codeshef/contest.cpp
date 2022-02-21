#include <iostream>
using namespace std;
#include <vector>
main()
{
    int t;
    cin >> t;
    vector<int> r;

    for (int i = 0; i < t; i++)
    {
        int cnt1 = 0, cnt2 = 0;
        for (int j = 0; j < 6; j++)
        {
            int m;
            cin >> m;
            if (j < 3)
            {
                cnt1 += m;
            }
            else
            {
                cnt2 += m;
            }
            // cin >> arr[j];
        }
        if (cnt1 > cnt2)
        {
            r.push_back(1);
        }
        else
        {
            r.push_back(2);
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout << r[i] << endl;
    }
    return 0;
}