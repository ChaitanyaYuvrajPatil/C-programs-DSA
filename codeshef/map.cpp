#include <iostream>
using namespace std;
#include <map>

int main()
{
    map<int, string> m;

    m[1] = "Ram";
    m[3] = "Sita";
    m[7] = "Laxman";

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
}