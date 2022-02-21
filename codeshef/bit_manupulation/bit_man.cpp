#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int getBit(int num, int pos)
{
    return (num & (1 << pos)) != 0;
}

int setBit(int num, int pos)
{
    return (num | (1 << pos));
}

int deleteBit(int num, int pos)
{
    int mask = ~(1 << pos);
    return (num & mask);
}

int updateBit(int num, int pos, int value)
{
    int mask = ~(1 << pos);
    num = (num & mask);
    return (num | (1 << pos));
}

int ispower(int n)
{
    return (n && !(n & n - 1));
}

int noOfones(int n)
{
    int count = 0;
    while (n)
    {
        n = (n & (n - 1));
        count++;
    }
    return count;
}

int subset(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j]<<" ";
            }
        }
        cout << endl;
    }
    return 0;
}

int unique(int arr[],int n)
{
    int xorsum =0;
    for(int i=0;i<n;i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

int main()
{
    //cout << getBit(5,1);
    //cout << setBit(5,1);
    //cout << deleteBit(5,2);
    //cout << updateBit(5,1,1);
    //cout << ispower(16);
    //cout << noOfones(19);
    int arr[] = {1, 2, 3, 1,2};
    //subset(arr, 4);
    cout << unique(arr,5);
}
