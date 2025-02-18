#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++; // For only lowercase
    }

    int q;
    cout << "Enter queries: ";
    cin >> q;

    while (q--)
    {
        char c;
        cout << "Enter character: ";
        cin >> c;

        cout << c << " appears " << hash[c - 'a'] << " times. " << endl;
    }
    return 0;
}