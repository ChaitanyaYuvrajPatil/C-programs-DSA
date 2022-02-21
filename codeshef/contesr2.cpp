#include <iostream>
using namespace std;
#include <vector>
main()
{
    int t;
    cin >> t;
    vector<int> r;
    int h[4];

    for (int i = 0; i < t; i++)
    {
        int cnt1 = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> h[j];
        }
        if (h[0] != h[1])
        {
            cnt1++;
        }
        if (h[2] != h[3])
        {
            cnt1++;
        }
        r.push_back(cnt1);
    }
    for (int i = 0; i < t; i++)
    {
        cout << r[i] << endl;
    }
    return 0;
}