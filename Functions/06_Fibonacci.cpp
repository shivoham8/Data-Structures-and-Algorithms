#include <iostream>
using namespace std;

void fib(int n)
{
    int a = 0, b = 1, next;

    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {

            cout << a << " ";
            next = a + b;
            a = b;
            b = next;
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    cout << "Fibonacci series: ";
    fib(n);
    return 0;
}