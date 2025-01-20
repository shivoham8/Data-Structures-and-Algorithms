// If a number is power of 2 without any loop

#include <iostream>
using namespace std;

bool isTrue(int n)
{
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main()
{
    int n;
    cin >> n;

    if (isTrue(n))
    {
        cout << n << " is a power of 2" << endl;
    }
    else
    {
        cout << n << " is not a power of 2" << endl;
    }

    return 0;
}