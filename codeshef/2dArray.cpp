#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <math.h>

int main()
{

    int n, m, target;
    cin >> n >> m;
    int a[n][m];
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int r = 0, c = m - 1;
    bool found = false;
    while (r < n && c >= 0)
    {
        if (a[r][c] == target)
        {
            found = true;
            break;
        }
        if (a[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    cout << "\n";

    if (found)
    {
        cout << "Element found at a[" << r << "][" << c << "]";
    }
    else
    {
        cout << "Element Not found";
    }

    /*int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int m1[n1][n2];
    int m2[n2][n3];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> m1[i][j];
        }
    }

    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> m2[i][j];
        }
    }

    int ans[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] = m1[i][k] * m2[j][k];
            }
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }*/
    /*int n, m;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << " \n";
    }*/
    /*int row_start = 0, row_end = n - 1, column_start = 0, column_end = m - 1;

    while (row_start <= row_end && column_start <= column_end)
    {
        for (int col = column_start; col <= column_end; col++)
        {
            cout << a[row_start][col] << " ";
        }

        row_start++;

        for (int row = row_start; row <= row_end; row++)
        {
            cout << a[row][column_end] << " ";
        }

        column_end--;

        for (int col = column_end; col >= column_start; col--)
        {
            cout << a[row_end][col] << " ";
        }
        row_end--;

        for (int row = row_end; row >= row_start; row--)
        {
            cout << a[row][column_start] << " ";
        }

        column_start++;
    }*/
    return 0;
}