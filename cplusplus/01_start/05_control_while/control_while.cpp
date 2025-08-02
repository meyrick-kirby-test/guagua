#include <iostream>

int main()
{
    // Sum from 51 to 99.
    int sum = 0;
    int i = 1;
    while (i < 51)
    {
        sum += i;
        i++;
    }

    std::cout << sum << std::endl;
    
    return 0;
}
