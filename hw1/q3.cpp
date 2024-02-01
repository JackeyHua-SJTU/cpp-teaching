#include <iostream>

using namespace std;

/**
 * !稍微有些复杂
 * @details 定义两个字符型变量x和y，并且读入用户的输入。将两个字符转换成对应的整数码(在英文字母表中的位置)，比如A和a转换成01，B和b转换成02，
 * D和d转换成04，Z和z转换成26。注意A和a不能转换成1，而必须是01。
 * 用户的输入只可能是字符，但大小写都有可能。
 * 最后将x的整数码和y的整数码输出。 (cout << x的整数码 << y的整数码)
 * 
 * E.g. x = 'A', y = 'c' --> 0103
 *      x = 'e', y = 'Y' --> 0525
 */

int main() {
    char x, y;
    cin >> x >> y;

    // TODO: write your code here
    // A B C D
    int x_code = (x >= 'A' && x <= 'Z') ? x - 'A' + 1 : x - 'a' + 1;
    int y_code = (y >= 'A' && y <= 'Z') ? y - 'A' + 1 : y - 'a' + 1;
    // cout << x_code / 10 << x_code % 10 << y_code / 10 << y_code % 10 << endl;

    if (x_code < 10) {
        cout << 0 << x_code;
    } else {
        cout << x_code;
    }

    if (y_code < 10) {
        cout << 0 << y_code;
    } else {
        cout << y_code;
    }

    return 0;
}