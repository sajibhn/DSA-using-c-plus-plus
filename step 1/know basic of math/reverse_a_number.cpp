#include <iostream>
using namespace std;

int main()
{
    int n = 123;
    int reverse = 0;
    while (n != 0)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    cout << "the reversed number is => " << reverse;

    return 0;
}