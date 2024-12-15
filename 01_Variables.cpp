#include <iostream>
using namespace std;
 
int main()
{
    char grade = 'A';
    char letter = 'a';
    // Data Types Conversion
    // 1-> Implicit
    int value = grade;
    int value2 = letter;

    // Prints Ascii values
    cout << value << endl;
    cout << value2 << endl;

    // 2-> Explicit
    // Big data types -> Small data types
    double price = 100.67;
    int newPrice = (int)price;
    cout << newPrice << endl;
    return 0;
}