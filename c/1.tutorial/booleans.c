#include <stdio.h>
#include <stdbool.h>

int main() {
  bool isWoman = true; // 1 represents a true value
  bool hasRights = false; // 0 represents a false value

  printf("1 represents a true value. 0 represents a false value. \n");

  printf("I am a woman: %d\n", isWoman); // outputs 1
  printf("I have rights: %d\n", hasRights); // outputs 0

  int x = 10, y = 9;
  printf("x is greater than y: %d", x > y);
  return 0;
}
