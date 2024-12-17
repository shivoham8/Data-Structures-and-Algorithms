#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter character: " << endl;
    cin >> ch;

    // Implicit type conversion
    if (ch >= 65 && ch <= 90)
    {
        cout << "Uppercase Character" << endl;
    }
    else
    {
        cout << "Lowercase Character" << endl;
    }
    return 0;
}