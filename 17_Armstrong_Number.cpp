#include <iostream>
using namespace std;

bool armstrongNum(int n) {
    int sum = 0, original = n;
    while(n>0) {
        int lastDigit = n%10;
        sum = sum + pow(lastDigit,3);
        n/=10;
    }
    if(sum!=original) {
        return false;
    }
    return true;
}
 
int main()
{
    int n;
    cin >> n;
    
    cout << armstrongNum(n) << endl;
    return 0;
}