#include <iostream>
#include <array>
#include <string>
#include <deque>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> a = {5, 4, 9};
    int size = a.size() - 1;
    int k = 2, j = 0;
    sort(a.begin(), a.end(), greater<int>());
    for (int i = 0; i < k; i++)
    {
        a[j] = floor(a[j] / 2);
        sort(a.begin(), a.end(), greater<int>());
    }

    cout << "\nSum = " << accumulate(a.begin(), a.end(), 0);
    /*string s = "iloveleetcode";
    string temp;
    bool m = false;
    vector<string> words = {"i","love","leetcode","apples"};

    for (int i = 0; i < words.size(); i++)
    {
        temp = temp + words[i];
        cout << temp << "\n";
        if (temp == s)
        {
            m = true;
            break;
        }
    }
    if(m){
        cout << "True";
    }else{
        cout << "False";
    }*/

    /*string order = "cbafg", s = "abcd";
    string temp;
    char left, right;
    int ct = 0, pt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < s[i + 1])
        {
            ct++;
        }
        else
        {
            break;
        }
    }
    left = s[0];
    right = s[ct];
    //cout << ct << "\n ";
    for (int i = 0; i <= ct; i++)
    {
        if (order[i] >= left && order[i] <= right)
        {
            pt++;
            //cout << order[i];
            temp.push_back(order[i]);
        }
        else
        {
            break;
        }
    }
    temp.push_back(s[pt]);
    cout << temp;*/
    /*array<int, 4> a = {1, 2, 34, 5};
    for (int i = 0; i < a.size(); i++)
    {
        //cout << a[i] << endl;
    }
    cout << a.at(2) << endl;
    cout << a.empty() << endl;

    cout << a.front() << endl;*/

    //Reverse string
    /*string abc = "abcsdk";
    int size = abc.size();
    int m = size - 1;
    for (int i = 0; i < size / 2; i++)
    {
        char temp = abc[i];
        abc[i] = abc[m];
        abc[m] = temp;
        m--;
    }
    cout << abc << "\n";*/
    /*Reverse string
    for (int i = 0; i < abc.size(); i++)
    {
        if (abc[i] >= 'a' && abc[i] <= 'z')
        {
            abc[i] -= 32;
        }
    }*/
}

//12