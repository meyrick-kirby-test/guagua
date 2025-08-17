#include <iostream>

void set_value(int value);
void set_value_ref(int& r_value);

int main() {

    // What is the value of i ?
    int i = 42;
    set_value(i);
    std::cout << "i: " << i << std::endl;

    // What is the value of j ?
    int j = 42;
    set_value_ref(j);
    std::cout << "j: " << j << std::endl;

    return 0;
}

void set_value(int value) {

    value = 101;
}

void set_value_ref(int& r_value) {

    r_value = 101;
}
