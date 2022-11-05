class Solution
{
public:
    void pushZerosToEnd(int arr[], int n)
    {
        // code here
        int k = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                arr[k] = arr[i];
                k++;
            }
        }

        while (k < n)
        {
            arr[k] = 0;
            k++;
        }
    }
};