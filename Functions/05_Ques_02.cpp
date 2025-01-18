// Print all prime numbers from 2 to n

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    if (n % 2 == 0) 
    {
        return false;
    }
    if (n > 3)
    {
        for (int i = 3; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

void printPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {

            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    cout << "Prime numbers from 2 to " << n << " are: ";
    printPrime(n);
    return 0;
}