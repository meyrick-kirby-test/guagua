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
    // Add year of birth.

    std::cout << guagua.first_name << " " << guagua.last_name << ", " << guagua.age << std::endl;

    // Calculate age from year of birth. Use the function get_utc_year()
    std::cout << "This year: " << get_utc_year() << std::endl;
    
    return 0;
}
