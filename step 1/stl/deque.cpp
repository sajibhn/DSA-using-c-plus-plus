#include <iostream>
#include <deque>
using namespace std;

int main()
{

    deque<int> d;

    d.push_back(1);
    d.push_front(5);

    // d.pop_front();
    // d.pop_back();

    d.size();

    for (int i : d)
    {
        cout << i << " ";
    }

    return 0;
}