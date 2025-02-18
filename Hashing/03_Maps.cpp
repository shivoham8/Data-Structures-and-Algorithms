#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }

    // for (auto it : m)
    // {
    //     cout << it.first << " : " << it.second << endl;
    // }

    int q;
    cin >> q;

    while (q--)
    {
        int num;
        cin >> num;

        if (m.find(num) != m.end())
        {
            cout << num << " appears " << m[num] << " times " << endl;
        }
        else
        {
            cout << num << " appears 0 times " << endl;
        }
    }
    return 0;
}