#include <stdio.h>
#include <string.h>

int main() {
  char favFood[] = "Fried Bread";
  printf("%s\n", favFood);
  printf("the length of this string is: %d.\n", strlen(favFood));

  char firstName[12] = "Mevia", lastName[] = "Nelson";
  strcat(firstName, lastName);
  printf("%s", firstName);

  char greet1[5] = "Hello!";
  char greet2[5];

  strcpy(greet2, greet1);

  printf("%s", greet2);
  return 0;
}
