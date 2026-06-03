// Program to find the Sum of numbers in a given range in C
#include <stdio.h>
int main() {
  int firstNum;
  int lastNum;
  int sum = 0;
  printf("Enter the First number  and Last number respectively: ");
  scanf("%d%d", &firstNum, &lastNum);
  for (int i = firstNum; i <= lastNum; i++) {
    sum += i;
  }
  printf("The sum is= %d\n", sum);
  return 0;
}
