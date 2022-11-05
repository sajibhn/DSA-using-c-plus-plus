class Solution
{
public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K)
    {
        int key = K;
        int size = N;

        for (int i = 0; i < size; i++)
        {
            if (arr[i] == key)
            {
                return 1;
            }
        }
        return -1;
    }
};