// Print all the unique values in an array

#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int freq = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                freq++;
            }
        }
        if (freq == 1)
        {
            cout << arr[i] << " ";
        }
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
    print(arr, n);
    return 0;
}