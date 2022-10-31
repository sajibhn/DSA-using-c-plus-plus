#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[8] = {5, 10, 21, 35, 7, 65, 10, 8};
    int size = 8;

    bubbleSort(arr, size);

    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}