#include <stdio.h>

int main() {
    int int_var;
    float float_var;
    char char_var;
    double double_var;

    printf("Size of int: %ld bytes\n", sizeof(int_var));
    printf("Size of float: %ld bytes\n", sizeof(float_var));
    printf("Size of char: %ld bytes\n", sizeof(char_var));
    printf("Size of double: %ld bytes\n", sizeof(double_var));

    return 0;
}
