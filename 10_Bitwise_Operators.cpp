#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 7;

    // Bitwise AND
    cout << (a & b) << endl;

    // Bitwise OR
    cout << (a | b) << endl;

    // Bitwise XOR
    cout << (a ^ b) << endl;

    // Left Shift Operator
    // a << b = a*(2^b)
    cout << (10 << 2) << endl; 
    
    // Right Shift Operator
    // a >> b = a/(2^b)
    cout << (8 >> 2) << endl;
    return 0;
}