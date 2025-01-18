#include <iostream>
using namespace std;

int decimalNumber(int n)
{
    int ans = 0, power = 1;
    while (n > 0)
    {
        int remainder = n % 10;
        ans += remainder * power;
        n /= 10; 
        power *= 2;
    }
    return ans;
}

int main()
{
    int n;

    cout << "Enter binary number: ";
    cin >> n;

    cout << "Decimal equivalent of " << n << " is " << decimalNumber(n) << endl;
    return 0;
}