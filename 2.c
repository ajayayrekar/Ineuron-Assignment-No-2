#include <stdio.h>

int without_last_digit(int num) {
  return num / 10;
}

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Number without last digit: %d\n", without_last_digit(num));
  return 0;
}
