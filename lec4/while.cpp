#include <iostream>

using namespace std;

int main() {
    int s = 10;
    while (s > 0) {
        cout << s << endl;
        s--;
    }

    int x = 10;
    while(x > 0) {
        cout << x-- << endl;
    }

    int z = 10;
    while(true) {
        cout << z << endl;
        z--;
        if (z == 0) {
            break;
        }
    }

    return 0;
}