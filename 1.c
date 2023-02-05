#include <stdio.h>

int unit_digit(int num) {
  return num % 10;
}

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Unit digit: %d\n", unit_digit(num));
  return 0;
}
