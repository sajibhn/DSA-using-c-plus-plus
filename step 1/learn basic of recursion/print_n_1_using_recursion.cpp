#include <iostream>
using namespace std;

// time complexity O(n)

void printName(int i, int n)
{
    if (i <= 0)
    {
        return;
    }

    cout << i << endl;
    printName(i - 1, n);
}

int main()
{
    printName(3, 3);
    return 0;
}