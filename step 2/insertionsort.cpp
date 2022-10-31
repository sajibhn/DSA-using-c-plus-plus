#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[8] = {5, 4, 21, 35, 7, 65, 10, 8};
    int size = 8;

    insertionSort(arr, size);

    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}