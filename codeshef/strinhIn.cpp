#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
int main()
{
    string s1 = "codeleet";
    vector<int> indices = {4, 5, 6, 7, 0, 2, 1, 3};

    string s2 = s1;

    for (int i = 0; i < indices.size(); i++)
    {
        s2[indices[i]] = s1[i];
    }

    cout << s2;
    /*int countL = 0, countR = 0, count = 0;

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == 'R')
        {
            countR++;
        }
        if (s1[i] == 'L')
        {
            countL++;
        }
        if (countL == countR)
        {
            count++;
            countL = 0;
            countR = 0;
        }
    }
    cout << count << endl;*/
}