#include <iostream>

int main()
{
    // What happens if we use ++i ?
    // Can we decrement i?
    int i = 0;
    while (i < 10)
    {
        std::cout << i++ << std::endl;
    }

    return 0;
}
