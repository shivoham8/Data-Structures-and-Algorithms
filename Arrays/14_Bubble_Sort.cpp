#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;
        // Since the last i elements are already sorted, we do not need to compare them again. Thus, the inner loop only needs to run up to n - i - 1, ignoring the sorted elements at the end.
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
    }

    if (!isSwap)
    {
        return;
    }
}

int main()
{
    int arr[] = {1, 7, 3, 2, 5};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
