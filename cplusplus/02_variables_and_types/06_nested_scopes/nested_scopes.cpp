#include <iostream>

int i = 42;

int main() {

    int i = 100;
    int j;

    {
        int i = 101;
        j = i;
    }

    std::cout << "j: " << j << std::endl;

    return 0;
}
