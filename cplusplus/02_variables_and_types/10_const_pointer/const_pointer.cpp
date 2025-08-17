#include <iostream>

void change_pointer(int const * *const pp_i, int const *const p_j);

int main() {

    int i = 42;
    int j = 101;

    // A pointer to a constant.
    int const * ptr_to_cnt = &i;
    // *ptr_to_cnt = j
    ptr_to_cnt = &j;

    // A constant pointer to a variable.
    int *const cnt_ptr_to_var = &i;
    *cnt_ptr_to_var = j;
    // cnt_ptr_to_var = &j;

    // A constant pointer to a constant.
    int const *const cnt_ptr_to_cnt = &i;
    // *cnt_ptr_to_cnt = j;
    // cnt_ptr_to_cnt = &j;

    int const * p_i = &i;
    change_pointer(&p_i, &j);
    std::cout << *p_i << std::endl;

    return 0;
}

void change_pointer(int const * *const pp_i, int const *const p_j) {
    *pp_i = p_j;
}
