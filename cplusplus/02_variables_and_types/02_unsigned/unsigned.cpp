#include <iostream>

int main() {

    unsigned u0 = 10, u1 = 11;

    std::cout << u1 - u0 << std::endl;
    std::cout << u0 - u1 << std::endl; // overflow

    int i0 = 10, i1 = 11;
    
    std::cout << i1 - i0 << std::endl;
    std::cout << i0 - i1 << std::endl;

    std::cout << i0 - u0 << std::endl;
    std::cout << u0 - i0 << std::endl;

    return 0;
}
