#include <iostream>
using namespace std;

// time complexity O(n)

void printName(int i, int n)
{
    if (i > n)
    {
        return;
    }

    cout << "Sajib Hossain" << endl;

    printName(i + 1, n);
}

int main()
{

    printName(1, 5);

    return 0;
}