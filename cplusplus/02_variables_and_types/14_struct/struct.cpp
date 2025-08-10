#include <iostream>
#include <time.h>

#include "person.h"
#include "date_common.h"

int main() {

    person guagua;

    std::cout << guagua.first_name << " " << guagua.last_name << ", " << guagua.age << std::endl;

    guagua.first_name = "Yuxin";
    guagua.last_name = "Huang";
    guagua.age = 15;

    std::cout << guagua.first_name << " " << guagua.last_name << ", " << guagua.age << std::endl;

    return 0;
}
