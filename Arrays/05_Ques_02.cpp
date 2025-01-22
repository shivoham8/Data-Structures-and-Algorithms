// Print intersection of two arrays

#include <iostream>
using namespace std;

void printArray(int arr1[], int arr2[], int n1, int n2)
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr2[j] << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    int n1, n2;

    cout << "Enter size of array 1: ";
    cin >> n1;
    cout << "Enter size of array 2: ";
    cin >> n2;

    int arr1[n1], arr2[n2];

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    printArray(arr1, arr2, n1, n2);
    return 0;
}