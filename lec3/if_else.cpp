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

    bool bonus;
    if (bonus) {
        x += 1;
    } 

    int y;
    cin >> y;
    if (y == 1) {
        y += 1;
    } else if (y == 2) {
        y /= 2;
    } else if (y == 3) {
        y *= 2;
    } else if (y == 4) {
        y = 0;
    } 

    int z;
    // if (x == 1) {
    //     z = 0;
    // } else {
    //     z = 1;
    // }

    z = (x == 1) ? 0 : 1;

    return 0;
}