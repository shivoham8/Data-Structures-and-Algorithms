#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int result(int n, int r)
{
    return (factorial(n)/(factorial(r)*(factorial(n-r))));
}

int main()
{
    int n, r;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter r: ";
    cin >> r;

    cout << "Result: " << result(n,r) << endl;
    return 0;
}