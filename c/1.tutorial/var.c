#include <stdio.h>

int main() {
  char firstInitial = 'M', middleInitial = 'J', lastInitial = 'N';
  int age = 16;
  float height = 180.4;
  const double PI = 3.1415926;
  printf("my initials are: %c%c%c.\n", firstInitial, middleInitial, lastInitial); // %c is the format specifier for char variables
  printf("i am %d years old.\n", age); // %d is format specifier for integers
  printf("i am %f cm tall!", height); // %f is the format specifer for floating point numbers
  printf("fun fact: the first 7 digits of pi are: %lf", PI); // %lf is the format specifier for double numbers
  return 0;
}
