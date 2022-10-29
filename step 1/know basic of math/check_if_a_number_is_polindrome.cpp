#include <iostream>
using namespace std;

int reversed(int number)
{
    int reverse = 0;

    while (number != 0)
    {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    return reverse;
}

int main()
{
    int x = 121;
    int y = reversed(x);

    if (x == y)
    {
        cout << "The number is a polindrom";
    }
    else
    {
        cout << "The number is not polindrom";
    }

    return 0;
}