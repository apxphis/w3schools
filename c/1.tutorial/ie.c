#include <stdio.h>
#include <stdbool.h>

int main() {
  int x = 10, y = 20;
  if (x < y) {
    printf("y is greater than x");
  } else if (x > y) {
    printf("x is greater than y");
  } else {
    printf("something went wrong!");
  }
  return 0;
}
