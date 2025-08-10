#include <iostream>

extern const double pi;
const double & r_pi = pi;

int main() {

    std::cout << "pi:   " << pi << std::endl;
    std::cout << "r_pi: " << r_pi << std::endl;
    std::cout << std::endl;

    double e =  2.71828;
    const double & r_e = e;

    std::cout << "e:    " <<   e << std::endl;
    std::cout << "r_e:  " << r_e << std::endl;
    std::cout << std::endl;

    return 0;
}
