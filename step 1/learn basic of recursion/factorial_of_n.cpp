#include <iostream>
using namespace std;

// time complexity O(n)

int printFactorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * printFactorial(n - 1);
}

int main()
{

    cout << printFactorial(5);
    return 0;
}