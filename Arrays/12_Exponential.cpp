#include <iostream>
using namespace std;

int power(int x, int n)
{
    int binForm = n, ans = 1;
    if (n == 0)
    {
        return 1;
    }
    if (x == 0)
    {
        return 0;
    }
    if (x == 1)
    {
        return 1;
    }
    if (x == -1 && n % 2 == 0)
    {
        return 1;
    }
    if (x == -1 && n % 2 != 0)
    {
        return -1;
    }
    if (n < 0)
    {
        x = 1 / x;
        binForm = -binForm;
    }
    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int main()
{
    int x, n;
    cout << "Enter number: ";
    cin >> x;

    cout << "Enter power: ";
    cin >> n;

    cout << x << " raise to " << n << " is " << power(x, n) << endl;
    return 0;
}
