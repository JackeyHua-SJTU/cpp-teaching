#include <iostream>

using namespace std;

// quick review of what we have learnt

int main() {
    // define an integer `x`, which has value 1
    int x = 1;
    // define a double `y`, which has value 2.2
    double y = 2.2;
    // define a char `z`, which has value 'c'
    char z = 'c';
    // "name" 'n' 'a'
    // define a bool `flag`, and INPUT the value via command line/console
    bool flag;
    // define a variable `ans`, whose value is the average of `x` and `y`
    double ans = (x + y) / 2;
    cout << ans << endl;
    double ans_1 = (x + y) / 2.0;
    // define a variable `ans_cast_to_int`, whose value is the casted value of `ans` to Interger
    int ans_cast_to_int = static_cast<int>(y); // static_cast<Type>(var)
    cout << ans_cast_to_int << endl;
    // print "Hello C++"
    cout << "Hello C++" << endl;
    // define a CONSTANT variable `year`, whose value is 2024
    const int year = 2024;
    return 0;
}