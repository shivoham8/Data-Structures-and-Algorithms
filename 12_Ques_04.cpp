// Reverse an integer n

#include <iostream>
using namespace std;

void reverseNumber(int n)
{
    int digit = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        digit = lastDigit;
        cout << digit;
        n /= 10;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    reverseNumber(n);
    return 0;
}