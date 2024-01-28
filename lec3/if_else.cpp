#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    if (x < 0) {
        cout << "x is negative" << endl;
    } else if (x <= 5) {
        cout << "x is between 0 and 5" << endl;
    } else {
        cout << "x is greater than 5" << endl;
    }

    return 0;
}