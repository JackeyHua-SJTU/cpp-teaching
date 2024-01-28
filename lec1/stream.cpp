#include <iostream>

#define x 3

int main() {
    /*
     * This is a demo file for I/O stream and macro.
     * Macro will be replaced by preprocessor before compilation.
     * g++ -E stream.cpp -o stream.i
    **/

    // This is a single line comment.
    std::cout << "x: " << x << std::endl; // output: 3
    // num is a variable 
    int num;

    // cin and cout will be directed to the standard input and output. (console)
    // Namely, fd = 0 and fd = 1.


    std::cout << "input a number: ";
    std::cin >> num;
    std::cout << "num: " << num << std::endl;
    return 0;
}