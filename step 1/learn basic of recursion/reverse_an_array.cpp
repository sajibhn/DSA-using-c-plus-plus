#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverse(int arr[], int start, int end)
{
    if (start < end)
    {
        swap(arr[start], arr[end]);
        reverse(arr, start + 1, end - 1);
    }
}

int main()
{
    int size = 5;
    int start = 0;
    int end = size - 1;
    int arr[5] = {1, 2, 3, 4, 5};

    reverse(arr, start, end);
    printArray(arr, size);

    return 0;
}