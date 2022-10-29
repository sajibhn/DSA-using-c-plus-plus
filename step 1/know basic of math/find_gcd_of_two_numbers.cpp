#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1 = 4;
    int num2 = 8;

    int ans = 0;

    for (int i = 2; i <= min(num1, num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            ans = i;
        }
    }
    cout << ans;
    return 0;
}