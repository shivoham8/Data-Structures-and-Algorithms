// Smallest/Largest number in array

#include <iostream>
using namespace std;

int smallestElement(int n, int arr[])
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int largestElement(int n, int arr[])
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Smallest element in array is: " << smallestElement(n, arr) << endl;
    cout << "Largest element in array is: " << largestElement(n, arr) << endl;
    return 0;
}