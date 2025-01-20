// Smallest/Largest number in array

#include <iostream>
using namespace std;

int smallestElement(int n, int arr[])
{
    int smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        smallest = min(arr[i], smallest);
    }
    return smallest;
}

int largestElement(int n, int arr[])
{
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        largest = max(arr[i], largest); 
    }
    return largest;
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