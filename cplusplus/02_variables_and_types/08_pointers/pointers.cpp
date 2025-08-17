#include <iostream>

void create_pointer();
void change_pointer_0();
void change_pointed_to();
void change_pointer_1();

int main() {

    create_pointer();
    change_pointer_0();
    change_pointed_to();
    change_pointer_1();

    return 0;
}

void create_pointer() {

    int i = 42;
    int * p_i = &i;

    std::cout << "   i: "  <<    i << std::endl;
    std::cout << " p_i: "  <<  p_i << std::endl;
    std::cout << "*p_i: "  << *p_i << std::endl;
    std::cout << std::endl;
}

void change_pointer_0() {

    int i = 42;
    int j = 101;
    int * p_i = &i;

    p_i = &j;

    std::cout << "   i: "  <<    i << std::endl;
    std::cout << "*p_i: "  << *p_i << std::endl;
    std::cout << std::endl;
}

void change_pointed_to() {

    int i = 42;
    int j = 101;
    int * p_i = &i;

    *p_i = j;

    std::cout << "   i: "  <<    i << std::endl;
    std::cout << "*p_i: "  << *p_i << std::endl;
    std::cout << std::endl;
}

void change_pointer(int * * pp_i, int * p_j) {
    *pp_i = p_j;
}

void change_pointer_1() {

    int i = 42;
    int j = 101;
    int * p_i = &i;

    change_pointer(&p_i, &j);
    
    std::cout << "   i: "  <<    i << std::endl;
    std::cout << "*p_i: " << *p_i << std::endl;
}
