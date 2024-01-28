#include <iostream>

using namespace std;

//* 写一个C++程序，判断输入的年份`year`是否是闰年
//* 是，则输出yes，否则输出no

int main() {
    int x;
    cin >> x;

    if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}