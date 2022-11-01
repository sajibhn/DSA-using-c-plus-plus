#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int i = start;
    int j = end;

    while (i < j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[start], arr[j]);
    return j;
}

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int j = partition(arr, start, end);
        quickSort(arr, start, j - 1);
        quickSort(arr, j + 1, end);
    }
}

int main()

{

    int arr[8] = {9, 8, 7, 5, 6, 2, 1, 4};
    int start = 0;
    int end = 8;

    quickSort(arr, start, end);

    for (int i = 0; i < end; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}