#include <iostream>

int main() {

    int i = 1, &r_i = i;
    int const ci = 2, &r_ci = ci;

    auto a = r_i;
    auto b = ci;
    auto c = r_ci;
    auto d = &i;
    auto e = &ci;

    auto const f = ci;

    auto &g = ci;
    // auto &h = 42;
    auto const &j = 42;

    auto &k = i;
    auto &m = ci;

    std::cout << typeid(ci).name() << std::endl;
    std::cout << typeid(ci).~type_info() << std::endl;

    std::cout << typeid(a).name() << std::endl;
    std::cout << typeid(b).name() << std::endl;
    std::cout << typeid(c).name() << std::endl;
    std::cout << typeid(d).name() << std::endl;
    std::cout << typeid(e).name() << std::endl;

    std::cout << "f: " << typeid(f).name() << std::endl;

    std::cout << typeid(g).name() << std::endl;
    std::cout << "j: " << typeid(j).name() << std::endl;

    std::cout << typeid(k).name() << std::endl;
    std::cout << typeid(m).name() << std::endl;

    return 0;
}
