// C Program to Check Whether a Number is Even or Odd
#include <stdio.h>
int main() {
  int num;
  printf("Enter the number:");
  scanf("%d", &num);
  if (num % 2 == 0) {
    printf("The number is Even");
  } else {
    printf("The number is Odd");
  }

  return 0;
}
