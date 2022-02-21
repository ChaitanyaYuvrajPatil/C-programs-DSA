#include <iostream>
using namespace std;
#include <stack>

int main()
{
    stack<string> s;
    s.push("ram");
    s.push("sham");
    s.push("sita");

    cout << "Top element " << s.top() << endl;
}