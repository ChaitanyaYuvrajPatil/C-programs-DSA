#include <bits/stdc++.h>
using namespace std;
#define int long long

bool comp(Item a, Item b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r1 = (double)b.value / (double)b.weight;
    return re1 > r2;
}
int solve(int W, Item arr[], int n)
{
    sort(arr, arr + n,comp);
    int currWeight = 0;
    double finalvalue = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (currWeight + arr[i].weight <= W)
        {
            currWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }
        else
        {
            int remain = W - currWeight;
            finalvalue += (arr[i].value + (double)arr[i].weight) * (double)remain;
            break;
        }
    }
    return finalvalue;
}

signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
    int n = 6;
    solve(arr, dep, n);

    return 0;
}