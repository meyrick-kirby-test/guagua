#include <cstdio>

int main() {

    std::printf("bool:               %d\n", sizeof(bool));
    std::printf("short:              %d\n", sizeof(short));
    std::printf("int:                %d\n", sizeof(int));
    std::printf("long:               %d\n", sizeof(long));
    std::printf("long long:          %d\n", sizeof(long long));

    std::printf(
        "float:              %d\n"
        "double:             %d\n"
        "long double:        %d\n",
        sizeof(float),
        sizeof(double),
        sizeof(long double)
    );

    std::printf("char:               %d\n", sizeof(char));
    std::printf("wchar_t:            %d\n", sizeof(wchar_t));
    std::printf("unsigned short:     %d\n", sizeof(unsigned short));
    std::printf("unsigned int:       %d\n", sizeof(unsigned int));
    std::printf("unsigned long:      %d\n", sizeof(unsigned long));
    std::printf("unsigned long long: %d\n", sizeof(unsigned long long));

    return 0;
}
