#include <iostream>

typedef int * p_int;
typedef const int cint;
typedef const int * p_cint;
typedef int *const cp_int;
typedef const int *const cp_cint;

void change_pointer(p_cint *const pp_i, cp_cint p_j);

int main() {

    int i = 42;
    int j = 101;

    // A pointer to a constant.
    p_cint ptr_to_cnt = &i;
    // *ptr_to_cnt = j
    ptr_to_cnt = &j;

    // A constant pointer to a variable.
    cp_int cnt_ptr_to_var = &i;
    *cnt_ptr_to_var = j;
    // cnt_ptr_to_var = &j;

    // A constant pointer to a constant.
    cp_cint cnt_ptr_to_cnt = &i;
    // *cnt_ptr_to_cnt = j;
    // cnt_ptr_to_cnt = &j;

    p_cint p_i = &i;
    change_pointer(&p_i, &j);
    std::cout << *p_i << std::endl;

    return 0;
}

void change_pointer(p_cint *const pp_i, cp_cint p_j) {
    *pp_i = p_j;
}
