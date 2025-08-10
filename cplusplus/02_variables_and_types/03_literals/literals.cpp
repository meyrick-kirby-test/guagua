#include <iostream>
#include <typeinfo>

int part_0();
int part_1();

int main() {

    int result = 0;
    
    result += part_0();
    result += part_1();

    return result;
}

int part_0() {
    std::cout << typeid('a').name() << std::endl;
    std::cout << typeid(L'a').name() << std::endl;
    std::cout << typeid("abc").name() << std::endl;
    std::cout << typeid(L"abc").name() << std::endl;
    std::cout << std::endl;

    std::cout << typeid(10).name() << std::endl;
    std::cout << typeid(10u).name() << std::endl;
    std::cout << typeid(10L).name() << std::endl;
    std::cout << typeid(10uL).name() << std::endl;
    std::cout << typeid(012).name() << std::endl;
    std::cout << typeid(0xC).name() << std::endl;
    std::cout << std::endl;

    std::cout << typeid(3.14).name() << std::endl;
    std::cout << typeid(3.14f).name() << std::endl;
    std::cout << typeid(3.14L).name() << std::endl;
    std::cout << std::endl;

    std::cout << typeid(10.).name() << std::endl;
    std::cout << typeid(10e-2).name() << std::endl;
    std::cout << std::endl;

    return 0;
}

int part_1() {
    int month_0 = 11, day_0 = 12;

    std::cout << month_0 << std::endl;
    std::cout << day_0 << std::endl;
    std::cout << std::endl;

    int month_1 = 011, day_1 = 012;

    std::cout << month_1 << std::endl;
    std::cout << day_1 << std::endl;
    std::cout << std::endl;

    int month_2 = 0x11, day_2 = 0x12;

    std::cout << month_2 << std::endl;
    std::cout << day_2 << std::endl;
    std::cout << std::endl;

    return 0;
}
