#include <iostream>
using namespace std;

void change(int a) {
    a = 20;
}

void changeA(int* ptr) {
    *ptr = 20;
}
 
int main()
{
    int a = 10;

    // Pass by value
    change(a);
    cout << a << endl;

    // Pass by reference
    changeA(&a);
    cout << a << endl;
    return 0;
}