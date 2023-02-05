#include <stdio.h>

int main() {
    int num, position = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while ((num & 1) == 0) {
        num = num >> 1;
        position++;
    }

    printf("The position of the first 1 in LSB is: %d\n", position);
    return 0;
}
