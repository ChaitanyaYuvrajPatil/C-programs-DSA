#include <iostream>
using namespace std;
#include <set>

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(8);
    s.insert(5);
    s.insert(2);
    s.insert(0);
    s.insert(9);
    s.insert(3);

    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << "5 is present or not -> " << s.count(-5) << endl;

    set<int>::iterator itr = s.find(5);

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}