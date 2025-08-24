#include <iostream>

int main() {

    // Using the debugger is better than using the typeid function for inspecting the locals.
    int i = 1;
    int &r_i = i;
    int const ci = 2;
    int const &r_ci = ci;

    auto a = r_i;
    auto b = ci;
    auto c = r_ci;
    auto d = &i;
    auto e = &ci;

    std::cout << "a: " << typeid(a).name() << std::endl;
    std::cout << "b: " << typeid(b).name() << std::endl;
    std::cout << "c: " << typeid(c).name() << std::endl;
    std::cout << "d: " << typeid(d).name() << std::endl;
    std::cout << "e: " << typeid(e).name() << std::endl;
    std::cout << std::endl;

    auto const f = ci;
    auto &g = ci;
    // auto &h = 42;
    auto const &j = 42;

    std::cout << "f: " << typeid(f).name() << std::endl;
    std::cout << "g: " << typeid(g).name() << std::endl;
    std::cout << "j: " << typeid(j).name() << std::endl;
    std::cout << std::endl;

    auto &k = i;
    auto &m = ci;

    std::cout << "k: " << typeid(k).name() << std::endl;
    std::cout << "m: " << typeid(m).name() << std::endl;
    std::cout << std::endl;

    return 0;
}
