// USed to calculate maximum sub array sum

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr) / sizeof(int);
    int currSum = 0, maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << maxSum << endl;
    return 0;
}