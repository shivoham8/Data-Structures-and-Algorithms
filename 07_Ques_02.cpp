// Q - Factorial of number n
#include <iostream>
using namespace std;

int main()
{
    int n, result = 1;
    cin >> n;

    for (int i = n; i >= 2; i--)
    {
        result = result * i;
    }
    cout << result << endl;
    return 0;
}

// Only valid for small value of n