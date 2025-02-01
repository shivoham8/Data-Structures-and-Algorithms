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
    return 0;
}