#include <iostream>
using namespace std;
#include <deque>

int main()
{
    deque<int> d;
    d.push_front(1);
    d.push_back(2);

    for (int i : d)
    {
        cout << i << " ";
    }

    //d.pop_front();
    cout << "\n";
    cout << "Element at first Index: " << d.at(1);
    cout << "\n";
    cout << "Front " << d.front() << endl;
    cout << "Back " << d.back() << endl;
}