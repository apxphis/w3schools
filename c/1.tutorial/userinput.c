#include <stdio.h>

int main() {
  // create the integer we're gonig to use
  int x, y;

  printf("Type a number: \n");
  scanf("%d", &x); // the & sign tells the program where to save the input

  printf("Type another number: \n");
  scanf("%d", &y);

  int sum = x + y;
  printf("The sum of your numbers is: %d", sum);
}
