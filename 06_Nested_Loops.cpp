#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter no. of rows:" << " ";
    cin >> m;

    cout << "Enter no. of columns:" << " ";
    cin >> n;

    for (int i = 1; i <= m; i++) // Prints no. of lines
    {
        for (int j = 1; j <= n; j++) // Prints no. of stars
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}