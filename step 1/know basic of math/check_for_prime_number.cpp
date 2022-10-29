#include <iostream>
using namespace std;

int main()
{
    int number = 28;

    for (int i = 2; i < number; i++)
    {
        if (number != 1 && number % i != 0)
        {
            cout << "is  a prime number";
        }
        else
        {
            cout << "is a not prime number";
        }

        return 0;
    }
}