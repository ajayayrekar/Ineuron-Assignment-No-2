#include <stdio.h>

int main() {
    char c;
    int ascii;

    printf("Enter a character: ");
    scanf("%c", &c);

    ascii = (int) c;

    printf("The ASCII code of %c is %d\n", c, ascii);
    return 0;
}
