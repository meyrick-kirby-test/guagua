#include <iostream>

int part_0();
int part_1();

int main() {

    int result = 0;

    result += part_0();
    result += part_1();

    return result;
}

int global_int;
std::string global_string;

int part_0() {

    int local_int;
    std::string local_string;

    std::cout << "Global int:     " << global_int           << std::endl;
    std::cout << "Global string: '" << global_string << "'" << std::endl;
    std::cout << "Local int:      " << local_int            << std::endl;
    std::cout << "Local string:  '" << local_string  << "'" << std::endl;
    std::cout << std::endl;

    return 0;
}

int part_1() {

    // std::cin >> int input_value;
    // int i = { 3.14 };
    // double salary = wage = 3.14;
    // int j = 3.14;

    return 0;
}
