#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 10; ++i) {
        cout << i << endl;
    }

    for (int j = 0; j < 10; j++) {
        cout << j << endl;
    }

    for (int k = 0; k < 10; k = k + 2) {
        cout << k << endl;
    }

    int l = 0;
    for (; l < 10; l++) {
        cout << l << endl;
    }

    int m = 10;
    for (; m > 0; m--) {
        cout << m << endl;
    }

    for (int n = 10; n > 0; --n) {
        cout << n << endl;
    }

    for (int t = 0; t < 0; ++t) {
        cout << "This will not be printed\n";
    }

    for (int z = 0; z < 10; ++z) {
        if (z == 1) {
            continue;
        }
        cout << z << endl;
        if (z == 3) {
            break;
        }
    }

    return 0;
}