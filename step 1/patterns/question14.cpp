#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char character = 'A' + col - 1;
            cout << character;
            col++;
        }
        cout << endl;
        row++;
    }
}
