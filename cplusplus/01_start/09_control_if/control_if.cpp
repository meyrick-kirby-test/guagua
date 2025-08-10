#include <iostream>

int main() {

    int begin, end;
    std::cout << "Enter first value: ";
    std::cin >> begin;
    std::cout << "Enter second value: ";
    std::cin >> end;

    if (begin < end) {
        for (int value = begin; value <= end; ++value) {
            std::cout << value << " ";
        }
    } else {
        for (int value = begin; end <= value; --value) {
            std::cout << value << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
