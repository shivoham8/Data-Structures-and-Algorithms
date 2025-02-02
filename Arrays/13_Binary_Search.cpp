// Works only on sorted arrays
// Time complexity --> O(log n)
#include <iostream>
using namespace std;

// Space complexity --> O(1) 
int binarySearch(int arr[], int n, int target)
{
    int start = 0, end = n - 1, ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return ans;
}

// Space complexity --> O(log n)
int recursive(int arr[], int n, int target, int start, int end)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > target)
        {
            return recursive(arr, n, target, start, mid - 1);
        }
        else if (arr[mid] < target)
        {
            return recursive(arr, n, target, mid + 1, end);
        } 
        else 
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {-1, 0, 3, 4, 5, 9, 12};
    int n = sizeof(arr) / sizeof(int);
    int target1 = 4;
    int target2 = 9;

    cout << target1 << " is present at index " << binarySearch(arr, n, target1) << endl;
    cout << target2 << " is present at index " << recursive(arr, n, target2, 0, n-1) << endl;
    return 0;
}