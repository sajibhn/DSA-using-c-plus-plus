#include <iostream>
using namespace std;

// time complexity O(n)

// void printSum(int i, int sum)
// {
//     if (i <= 0)
//     {
//         return;
//     }
//     cout << sum << endl;
//     printSum(i - 1, sum + i);
// }

int printSum(int sum)
{
    if (sum == 0)
    {
        return 0;
    }

    return sum + printSum(sum - 1);
}

int main()
{
    // printSum(5, 0);
    cout << printSum(5);
    return 0;
}