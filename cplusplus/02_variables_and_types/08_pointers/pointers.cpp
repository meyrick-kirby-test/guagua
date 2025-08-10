#include <iostream>

#pragma region forward declarations
void part_0();
void part_1();
void part_2();
void part_3();
void part_4();
#pragma endregion

int main() {

    part_0();
    part_1();
    part_2();
    part_3();
    part_4();

    return 0;
}

void part_0() {

    int i = 42;
    int* p_i = &i;

    std::cout << "   i: "  <<    i << std::endl;
    std::cout << " p_i: "  <<  p_i << std::endl;
    std::cout << "*p_i: "  << *p_i << std::endl;
    std::cout << std::endl;
}

void part_1() {

    int i = 42;
    int j = 101;
    int* p_i = &i;

    p_i = &j;

    std::cout << "   i: "  <<    i << std::endl;
    std::cout << "*p_i: "  << *p_i << std::endl;
    std::cout << std::endl;
}

void part_2() {

    int i = 42;
    int j = 101;
    int* p_i = &i;

    *p_i = j;

    std::cout << "   i: "  <<    i << std::endl;
    std::cout << "*p_i: "  << *p_i << std::endl;
    std::cout << std::endl;
}

void part_3() {

    int arr[] = { 1, 2, 3 };

    int* p_arr = &arr[0];
    int length = sizeof(arr) / sizeof(int);
    for (int i = 0; i < length; ++i) {
        std::cout << (p_arr + i) << "\t" << *(p_arr + i) << std::endl;
    }
    std::cout << std::endl;
}

void set_array(int* p_arr, int length) {

    for (int i = 0; i < length; ++i) {
        *(p_arr + i) = (i + 1) * 2;
    }
}

void print_array(int* p_arr, int length) {
    
    for (int i = 0; i < length; ++i) {
        std::cout << (p_arr + i) << "\t" << *(p_arr + i) << std::endl;
    }
    std::cout << std::endl;
}

void part_4() {

    int arr[] = { 0, 0, 0 };

    set_array(&arr[0], sizeof(arr) / sizeof(int));
    print_array(&arr[0], sizeof(arr) / sizeof(int));
}
