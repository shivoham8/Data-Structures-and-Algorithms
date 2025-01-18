// Calculate sum of digits of a number

#include <iostream>
using namespace std;

int digitSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        n = n / 10;
        sum += last_digit;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    cout << digitSum(n) << endl;
    return 0;
}