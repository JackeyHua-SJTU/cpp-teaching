#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "x is 1" << endl;
        break;
    
    case 2:
        cout << "x is 2" << endl;

    default:
        cout << "x is neither 1 nor 2" << endl;
        break;
    }
    
    return 0;
}