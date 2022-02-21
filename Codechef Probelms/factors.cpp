#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    std::cout << "Enter a number" << std::endl;
    cin >> n;
    int x = sqrt(n);
    cout << "Factors are given below";
    for (int i = 1; i <= x; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                cout << " " << i;
            else
                cout << " " << i << " " << n / i;
        }
    }

    return 0;
}