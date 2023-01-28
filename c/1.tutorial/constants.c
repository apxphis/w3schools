#include <stdio.h>

int main() {
  const double PI = 3.1415926;
  double radius = 10.0;
  double circumference = 2.0 * PI * radius;
  printf("the circumference of a circle with a radius of %f is: %f", radius, circumference);
  return 0;
}
