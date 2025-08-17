#include <iostream>

void part_0();
void part_1();

int main() {

    part_0();
    part_1();

    return 0;
}

void part_0() {

    int arr[] = { 1, 2, 3 };

    int * p_arr = &arr[0];
    int length = sizeof(arr) / sizeof(int);
    for (int i = 0; i < length; ++i) {
        std::cout << (p_arr + i) << "\t" << *(p_arr + i) << std::endl;
    }
    std::cout << std::endl;
}

void set_array(int * p_arr, int length) {

    for (int i = 0; i < length; ++i) {
        *(p_arr + i) = (i + 1) * 2;
    }
}

void print_array(int * p_arr, int length) {
    
    for (int i = 0; i < length; ++i) {
        std::cout << (p_arr + i) << "\t" << *(p_arr + i) << std::endl;
    }
    std::cout << std::endl;
}

void part_2() {

    int arr[] = { 0, 0, 0 };

    set_array(&arr[0], sizeof(arr) / sizeof(int));
    print_array(&arr[0], sizeof(arr) / sizeof(int));
}
