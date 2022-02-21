#include <iostream>
using namespace std;
#include <queue>

int main()
{
    queue<string> s;
    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int>> mini;
    /*s.push("ram");
    s.push("sham");
    s.push("sita");

    cout << "Top element " << s.front() << endl;
    s.pop();
    cout << "Top element " << s.front() << endl;*/

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout << "Size -> " << maxi.size() << endl;
    int n = maxi.size();

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }

    cout << endl;
}