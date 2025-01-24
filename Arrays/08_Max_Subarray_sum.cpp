#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr) / sizeof(int);
    int maxSum = INT_MIN;

    for (int start = 0; start < n; start++)
    {
        int currentSum = 0;
        for (int end = start; end < n; end++)
        {
            currentSum += arr[end];
            maxSum = max(maxSum, currentSum);
        }
    }
    cout << maxSum << endl;
    return 0;
}