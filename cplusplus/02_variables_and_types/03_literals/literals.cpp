#include <iostream>
#include <typeinfo>

int part_0();
int part_1();

int main() {

    std::cout << typeid('a').name() << std::endl;
    std::cout << typeid(L'a').name() << std::endl;
    std::cout << typeid("abc").name() << std::endl;
    std::cout << typeid(L"abc").name() << std::endl;
    std::cout << std::endl;

    // What types? 10, 10u, 10L, 10uL, 012, 0xC
    // What are the values of 012 and 0xC ?

    std::cout << std::endl;

    // What types? 3.14, 3.14f, 3.14L
    
    std::cout << std::endl;

    // What types? 10., and 10e-2 ?
    // What value is 10e-2 ?
    
    std::cout << std::endl;

    return 0;
}
