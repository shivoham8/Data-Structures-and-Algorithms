// Hashing -> Pre storing, fetching
// Number Hashing-->
#include <iostream>
using namespace std;

int arr[1e7];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // precompute
    int hash[1000000] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter number: ";
    cin >> q;

    while (q--)
    {
        int number, i=0;
        cout << "Enter number " << i+1 << ": ";
        cin >> number;
        // fetch
        cout << "No. of times " << number << " appears in the array is " << hash[number] << endl;
    }
    return 0;
}