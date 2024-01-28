#include <iostream>

using namespace std;

int main() {
    int x = 1, y = 1, z = 2;
    cout << "x equals to y is " << ((x == y) ? "true" : "false") << endl;
    cout << "x is greater than y is " << ((x > y) ? "true" : "false") << endl;
    cout << "x is smaller than y is " << ((x < y) ? "true" : "false") << endl;
    cout << "x is greater than or equal to z is " << ((x >= z) ? "true" : "false") << endl;
    cout << "x is smaller than or equal to z is " << ((x <= z) ? "true" : "false") << endl;
    cout << "x is not equal to y is " << ((x != y) ? "true" : "false") << endl;

    return 0;
}