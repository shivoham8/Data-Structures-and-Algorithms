#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> ch = {'a','b','c','d','e'};
    
    cout << "Size: " << ch.size() << endl;
    for(char val : ch) {
        cout << val << " ";
    }
    cout << endl;
    
    ch.push_back('f');
    cout << "Size: " << ch.size() << endl;
     for(char val : ch) {
        cout << val << " ";
    }
    cout << endl;
    
    ch.pop_back();
    cout << "Size: " << ch.size() << endl;
     for(char val : ch) {
        cout << val << " ";
    }
    cout << endl;
    
    cout << ch.front() << endl;
    cout << ch.back() << endl;
    
    cout << ch.at(2) << endl;

    return 0;
}