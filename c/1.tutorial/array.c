#include <stdio.h>

int main() {
  int ages[] = {16, 17, 21, 16}; // this is one way to make an array
  int i;
  for (i = 0; i < 4; i++) { // this is how we can print everything in an array
    printf("%d\n", ages[i]);
  }
  printf("--------------\n");
  int myNums[4]; // this is another way we can make an array. we just need to know how long the array is before we declare it, as we can not change it after
  myNums[0] = 7;
  myNums[1] = 14;
  myNums[2] = 21;
  myNums[3] = 28;
  myNums[4] = 35;
  int ii;
  for (ii = 0; ii < 4; ii++) {
    printf("%d\n", myNums[ii]);
  }
}
