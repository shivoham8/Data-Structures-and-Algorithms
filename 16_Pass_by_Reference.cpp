#include <iostream>
using namespace std;

void change(int a) {
    a = 20;
}

// Through pointers
void changeA(int* ptr) {
    *ptr = 20;
}

// Through references (alias)
void changeB(int &b) {
    b = 30;
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

    changeB(a);
    cout << a << endl;
    return 0;
}