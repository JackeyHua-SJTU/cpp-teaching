#include <iostream>

using namespace std;

/**
 * @details 设置一个char类型的变量x，通过cin.get(x)读入用户输入的值。
 * 判断x是否是元音字母，如果是元音字母，输出vowel，如果是字母但不是元音，
 * 输出consonant，否则输出not a letter。
 * 
 * 判断x是否是字母，可以用 x >= 'a' && x <= 'z'实现，可以思考一下原因
 * 
 * E.g. x = 'a' --> vowel
 *      x = 'w' --> consonent
 *      x = '1' --> not a letter
 */

int main() {
    char x;
    cin.get(x);

    // TODO: write your code here
    if (x >= 'a' && x <= 'z') {
        switch (x)
        {
        case 'a':

        case 'e':

        case 'i':
            
        case 'o':
            
        case 'u':
            cout << "vowel\n"; 
            break;
        
        default:
            cout << "consonant\n";
            break;
        }
    } else {
        cout << "not a letter\n";
    }


    return 0;
}