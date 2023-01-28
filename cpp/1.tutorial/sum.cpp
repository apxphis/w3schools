#include <iostream>
using namespace std;

int main() {
  // the int is there while we are making x, y and sum, which are new variables
  int x, y;
  int sum;

  // gets input from our user
  cout << "Input an integer: ";
  cin >> x;

  // gets more input from our user
  cout << "Input another integer: ";
  cin >> y;

  sum = x + y; // don't add "int" as a prefix, this is only needed when declaring a new variable
  cout << "The sum is: " << sum;
  return 0;
}
