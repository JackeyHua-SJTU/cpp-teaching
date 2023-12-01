#include <iostream>

using namespace std;

int main() {
    int x;
    // random value
    cout << x << endl;

    int y = 0;
    int z{0};
    cout << y << endl << z << endl;

    // ASCII code
    char c = 65;
    char d = 'A';
    cout << c << endl << d << endl;

    // enumeration type
    enum discipline {math, physics, chemistry};
    discipline e = math;    // default value is 0
    cout << e << endl;

    enum discipline2 {math2 = 1, physics2, chemistry2};
    discipline2 f = chemistry2;
    cout << f << endl;

    return 0;
}