#include <stdio.h>
int main() {
  int num = 23;
  if (num > 0)
    printf("The number is positive");
  else if (num < 0)
    printf("The number is negative");
  else
    printf("Zero");
  return 0;
}
