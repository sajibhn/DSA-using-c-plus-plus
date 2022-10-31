#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{

    for (int i = 0; i <= size - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{

    int arr[8] = {5, 10, 21, 35, 7, 65, 10, 8};
    int size = 8;

    selectionSort(arr, size);

    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}