#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    int k = start;
    int b[10000];

    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            b[k++] = arr[i++];
        }
        else
        {
            b[k++] = arr[j++];
        }
    }

    if (i > mid)
    {
        while (j <= end)
        {
            b[k++] = arr[j++];
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k++] = arr[i++];
        }
    }

    for (k = start; k <= end; k++)
    {
        arr[k] = b[k];
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {

        int mid = (start + end) / 2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    int arr[5] = {21, 25, 19, 18, 17};
    int start = 0;
    int end = 4;

    mergeSort(arr, start, end);

    for (int i = 0; i < end; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}