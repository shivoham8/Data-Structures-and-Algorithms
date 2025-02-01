#include <iostream>
using namespace std;
 
int main()
{
    int a = 10;
    int* ptr = &a;
    cout << &a << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    int** parPtr = &ptr;
    cout << &ptr << endl;
    cout << parPtr << endl;
    cout << *(parPtr) << endl;
    cout << **(parPtr) << endl;

    int* ptr2 = NULL;
    cout << ptr2 << endl;

    int arr[] = {1, 2, 3, 4, 5};
    cout << arr << endl; // Prints memory address
    cout << *arr << endl; // Prints value at index [0]
    return 0;
}
