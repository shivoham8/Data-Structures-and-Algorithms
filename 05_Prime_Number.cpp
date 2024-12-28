#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = true;
    cout << "Enter a number :" << " ";
    cin >> n;

    // After sqrt{n} X sqrt{n} factors will repeat themselves
    // eg. --> 25
    // 1 x 25
    // 5 x 5
    // 25 x 1

    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << n << " is a Prime Number" << endl;
    } else {
        cout << n << " is not a Prime Number" << endl;
    }
    return 0;
}