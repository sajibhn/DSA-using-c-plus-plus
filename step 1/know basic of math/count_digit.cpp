#include <iostream>
using namespace std;

int main()
{
    int n = 123456;
    int count = 0;

    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    cout << "number of digit are => " << count;

    return 0;
}