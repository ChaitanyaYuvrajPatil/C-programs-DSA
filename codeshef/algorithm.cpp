#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <math.h>

int main()
{

    int arr[] = {1, 3, 5, 6}, size = 4, target = 2;

    if (target < arr[0])
    {
        cout << " index should : " << 0 << endl;
        return 0;
    }
    if (target > arr[size - 1])
    {
        cout << " index should : " << size << endl;
        return size;
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << " index : " << i << endl;
            break;
        }
        else if (arr[i] < target && arr[i + 1] > target)
        {
            cout << " index should : " << i + 1 << endl;
            break;
        }
    }

    /*int min_apple, count = 0;
    cin >> min_apple;
    double totalAppleIn = 0;

    while (min_apple > totalAppleIn)
    {
        count++;
        totalAppleIn += 12 * pow(count, 2);
    }
    cout << count * 8;*/

    /*const int N = 1e6 + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            minidx = min(minidx, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }

    if (minidx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minidx + 1 << endl;
    }*/
    return 0;

    //logic for max day
    /*cin >> size;
    int arr[size + 1];
    arr[size] = -1;
    mx = -1;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (size == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >> mx && arr[i] > arr[i + 1])
        {
            curr++;
        }
        mx = max(mx, arr[i]);
    }*/

    //cout << curr;
    /*vector<int> store;
    cd = arr[1] - arr[0];
    curr = 2;
    for (int i = 2; i < size; i++)
    {
        if (arr[i] - arr[i - 1] == cd)
        {
            curr++;
        }
        else
        {
            store.push_back(curr);
            cd = arr[i] - arr[i - 1];
            curr = 2;
        }
    }

    cout << "\n"
         << *max_element(store.begin(), store.end());*/

    //sum of element of sub array
    /*vector<int> store;

    for (int i = 0; i < size; i++)
    {
        sum = 0;
        for (int j = i; j < size; j++)
        {
            sum += arr[j];
            cout << sum << endl;
            store.push_back(sum);
        }
    }*/

    /*mx = arr[0];
    for(int i=0;i<7;i++)
    {
        mx = max(mx,arr[i]);
        cout<< mx << " ";
    }*/

    /*int arr[] = {-1, -100, 3, 99};
    int a, b, size = 4, key = 2;

    while (key)
    {
        a = arr[size-1];
        for (int i = size-1; i >= 0 ; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = a;
        key--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }*/
    return 0;
}