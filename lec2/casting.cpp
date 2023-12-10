#include <iostream>

using namespace std;

int main() {
    int x = 5;
    int y = 2;
    double z = x / y;  // z = 2.0
    z = static_cast<double>(x) / y; // z = 2.5

    // principle of type casting
    // low accuracy will be AUTOMATICALLY casted to high accuracy in calculation
    // ! char will be casted to int (ASCII code)
    int a = 3.4;   // a = 3
    double b = 3;  // b = 3.0
    
    return 0;
}