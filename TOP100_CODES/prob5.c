// Find the Greatest of the Two Numbers in C
#include <stdio.h>
int main() {
  int firstNum;
  int secondNum;
  printf("Enter first and second number respectively:");
  scanf("%d%d", &firstNum, &secondNum);
  if (firstNum > secondNum) {
    printf("%d is Greater", firstNum);
  } else if (secondNum > firstNum) {
    printf("%d is Greater", secondNum);
  } else {
    printf("Both are equal");
  }
  return 0;
}
