#include <iostream>
using namespace std;

int binaryNumber(int n)
{
    int remainder = 0, power = 1, ans = 0;
    while (n > 0)
    {
        remainder = n % 2;
        n = n / 2;
        ans += remainder * power;
        power *= 10;
    }
    return ans;
}

int main()
{
    int n;

    cout << "Enter decimal number: ";
    cin >> n;

    cout << "Binary equivalent of " << n << " is: " << binaryNumber(n) << endl;

    return 0;
}