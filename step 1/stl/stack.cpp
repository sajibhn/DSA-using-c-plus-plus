#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("sajib");
    s.push("hossain");
    s.push("good boy");

    cout << s.top();
    s.pop();
    cout << s.top();
    cout << s.size();
    s.empty();
    return 0;
}