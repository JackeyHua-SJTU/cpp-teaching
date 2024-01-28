#include <iostream>

// define two namespaces

namespace np1 {
    int x = 1;
    int y = 2;
}

namespace np2 {
    int x = 3;
    int y = 4;
}


int main() {
    std::cout << "x in np1: " << np1::x << std::endl; // output: 1
    std::cout << "y in np1: " << np1::y << std::endl; // output: 2
    std::cout << "x in np2: " << np2::x << std::endl; // output: 3
    std::cout << "y in np2: " << np2::y << std::endl; // output: 4
    return 0;
}