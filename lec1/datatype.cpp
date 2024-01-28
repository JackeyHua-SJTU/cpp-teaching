#include <iostream>

using namespace std;

// integer int 1
// float double 浮点数
// char 字符 ASCII码 
// bool 布尔值
// enum enumeration 枚举类型
enum weekday {
    Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};


int main() {
    int x;
    // random value
    cout << x << endl;

    int y = 0;
    int y;
    y = 0;
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
    int x = 1;

    cout << x << " " << y << " " << z << " " << endl;

    return 0;
}