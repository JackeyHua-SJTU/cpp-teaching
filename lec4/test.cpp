#include <iostream>

using namespace std;

int main() {
    for (char c = 'a'; c <= 'f'; ++c) {
        cout << c << endl;
    }

    for (char c = 'z'; c >= 'x'; --c) {
        cout << c << endl;
    }

    for (int i = 97; i <= 102; ++i) {
        cout << static_cast<char>(i) << endl;
    }

    return 0;
}