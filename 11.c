#include <stdio.h>

int main() {
    int num, digit, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a digit: ");
    scanf("%d", &digit);
    result = num * 10 + digit;
    printf("The resulting number is: %d\n", result);
    return 0;
}
