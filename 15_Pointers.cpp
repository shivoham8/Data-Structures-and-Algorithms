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
    cout << *(arr+1) << endl; // Prints value at index [1]

    int* ptr3;
    int* ptr4 = ptr3 + 2; // 2 int 

    cout << ptr3 << endl;
    cout << ptr4 << endl;
    cout << ptr4 - ptr3 << endl;

    return 0;
}