// Check if the Year is a Leap Year or Not in C
#include <stdio.h>
int main() {
  int year;
  printf("Enter the year:");
  scanf("%d", &year);
  if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
    printf("%d is a leap year", year);
  } else {
    printf("Its's a leap year");
  }
  return 0;
}
