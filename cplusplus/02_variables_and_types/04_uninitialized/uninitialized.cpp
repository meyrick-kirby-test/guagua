#include <iostream>

int global_int;
std::string global_string;

int main() {

    int local_int;
    std::string local_string;

    // What is the value of local_int ?
    std::cout << "Global int:     " << global_int           << std::endl;
    std::cout << "Local int:      " << local_int            << std::endl;
    std::cout << std::endl;

    // What is the value of local_string? Why?
    std::cout << "Global string: '" << global_string << "'" << std::endl;
    std::cout << "Local string:  '" << local_string  << "'" << std::endl;
    std::cout << std::endl;

    return 0;
}
