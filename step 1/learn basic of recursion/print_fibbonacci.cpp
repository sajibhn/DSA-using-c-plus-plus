#include <iostream>
using namespace std;

int fibbonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    int firstNumber = fibbonacci(n - 1);
    int lastNumber = fibbonacci(n - 2);
    int fibNumber = firstNumber + lastNumber;
    return fibNumber;
}

int main()
{
    int n = 5;

    cout << "the number is => " << fibbonacci(n);

    return 0;
}