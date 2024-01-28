#include <iostream>

using namespace std;

int main() {
    int y;
    cin >> y;

    // 根据y除3的余数，进行不同的输出
    if (y % 3 == 0) {
        cout << 'a' << endl;
    } else if (y % 3 == 1) {
        cout << 'b' << endl;
    } else {
        cout << 'c' << endl;
    }

    switch (y % 3)
    {
    case 0:
        cout << 'a' << endl;
        break;
    
    case 1:
        cout << 'b' << endl;
        break;

    // case 2:
    //     cout << 'c' << endl;
    //     break;

    default:
        cout << 'c' << endl;
        break;
    }

    return 0;
}