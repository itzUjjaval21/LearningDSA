// C Program to Find the Sum of First N Natural Numbers
#include <stdio.h>
int main() {
  int num;
  int sum = 0;
  printf("Enter the number till which you want to find sum:");
  scanf("%d", &num);
  for (int i = 1; i <= num; i++) {
    sum = sum + i;
  }
  printf("The sum is: %d", sum);
}
