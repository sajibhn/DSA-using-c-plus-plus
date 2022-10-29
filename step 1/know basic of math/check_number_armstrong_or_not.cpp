#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int originalNumber = 153;
    int number = originalNumber;

    int armstrong = 0;
    int count = 0;
    int temp = number;

    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }

    while (number != 0)
    {
        int digit = number % 10;
        armstrong += pow(digit, count);
        number = number / 10;
    }

    if (armstrong == originalNumber)
    {
        cout << "number is armstrong";
    }
    else
    {
        cout << "number is not armstrong";
    }

    return 0;
}