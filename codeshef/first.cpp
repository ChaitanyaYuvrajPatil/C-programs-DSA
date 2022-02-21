#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c1 = 0, c2 = 0, l = 0, temp = 0;
    bool T_F = true;
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        c1 += a;
        c2 += b;
        temp = c1 - c2;
        if (temp > 0 && temp > l)
        {
            l = temp;
            T_F = true;
        }
        if (temp < 0 && -temp > l)
        {
            l = -temp;
            T_F = false;
        }
    }
    if (T_F)
    {
        cout << '1' << ' ' << l;
    }
    else
    {
        cout << '2' << ' ' << l;
    }
    return 0;
}

/*
#include <vector>
int main()
{
    int n, s, max1, player1 = 0;
    cin >> n;
    s = n;
    vector<int> player;
    vector<int> score;
    while (n--)
    {
        int a, b, max;
        cin >> a >> b;

        if (a - b > -1)
        {
            score.push_back(a - b);
            player.push_back(1);
            //max = a-b;
        }
        if (b - a > -1)
        {
            //max = b - 1;
            score.push_back(b - a);
            player.push_back(2);
        }
    }
    max1 = score[0];
    for (int i = 0; i < s; i++)
    {
        if (score[i] > max1)
        {
            max1 = score[i];
            player1 = i;
        }
        //cout << score[i] << "\n";
    }
    cout << player[player1] << " " << max1;
    return 0;
}
*/
