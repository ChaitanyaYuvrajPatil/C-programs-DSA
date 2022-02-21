#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int binarySearch(int arr[], int key)
{
    int s = 0, e = 6, mid;

    while (s <= e)
    {
        mid = (s + e) / 2;
        if (arr[mid] < key)
        {
            s = mid + 1;
        }
        if (arr[mid] > key)
        {
            e = mid - 1;
        }
        if (arr[mid] == key)
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {45, 9, 67, 5, 12, 2};
    int size = 6;

    /* Selection Sort

    for (int i = 0; i < 6-1; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    */

    // Buble sort
    /*
    for (int j = 1; j < 6; j++)
    {
        for (int i = 0; i < 6 - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    */

    for (int i = 0; i < size; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}