#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }

    cout << "Reversed array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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

    reverseArray(arr, n);
    return 0;
}