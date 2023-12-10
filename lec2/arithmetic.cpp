#include <iostream>

using namespace std;

int main() {
    int x = 3;
    int y = 3;
    x += 2; // x = x + 2;
    y *= 2; // y = y * 2;
    x -= 2; // x = x - 2;
    y /= 2; // y = y / 2;
    int u = (x + y) * (x - y);  // basic arithmetic operation
    int z = x++;    // z = x; x = x + 1;
    int w = ++y;    // y = y + 1; w = y;
    cout << "z = " << z << endl << "w = " << w << endl;
    return 0;
}