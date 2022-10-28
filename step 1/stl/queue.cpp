#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("sajib");
    q.push("hossain");
    q.push("good boy");

    cout << q.front();
    cout << q.size();
    q.pop();
    return 0;
}