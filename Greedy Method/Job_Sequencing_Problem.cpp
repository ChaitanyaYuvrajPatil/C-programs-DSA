#include <bits/stdc++.h>
using namespace std;
#define int long long

struct Job
{
    int id;
    int dead;
    int profit;
};
static bool comp(Job a, Job b)
{
    return a.profit > b.profit;
}
vector<int> solve(Job arr[], int n)
{
    sort(arr, arr + n, comp);
    bool done[n] = {0};

    int day = 0, profit = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = arr[i].dead - 1; j >= 0; j--)
        {
            if (done[j] == false)
            {
                day += 1;
                profit += arr[i].profit;
                done[j] = true;
                break;
            }
        }
    }

    return {day, profit};
}

signed main()
{
    cin.tie(0)->sync_with_stdio(0);

    solve(arr, dep, n);

    return 0;
}