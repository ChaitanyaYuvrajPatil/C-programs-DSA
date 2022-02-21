#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <math.h>
#include <array>
#include <list>

int kadane(int arr[], int n)
{
    int sum = 0, maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int pairsum(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[low] + arr[high] == k)
        {
            return true;
        }
        else if (arr[low] + arr[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}

int main()
{
    int n, sum = 1, maxSum = INT_MIN;
    vector<int> store1;
    cin >> n;
    int a[n], k = 31;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << pairsum(a, n, k) << " ";

    /*int wrapsum;
    int nonwrapsum;
    int totalSum = 0;

    nonwrapsum = kadane(a, n);
    for (int i = 0; i < n; i++)
    {
        totalSum += a[i];
        a[i] = -a[i];
    }

    wrapsum = totalSum + kadane(a, n);

    cout << max(wrapsum, nonwrapsum);*/

    //kadane's Algorithm
    /*int k = 3, co = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        if (sum < 0)
        {
            sum = 0;
        }
        maxSum = max(maxSum, sum);
    }
    cout << maxSum;*/

    // Max sum of subArray

    /*for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + a[j];
            maxSum = max(maxSum, sum);
        }
        maxSum = max(maxSum, sum);
    }

    cout << " " << co;*/

    return 0;
}