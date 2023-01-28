#include <iostream>
using namespace std;

int main() {
  // declaring all our variables
  int x, y, diff;

  // setting up the numbers for our user
  cout << "Input an integer: ";
  cin >> x;
  cout << "Input another integer: ";
  cin >> y;

  diff = x - y;
  cout << "The difference between the two numbers is: " << diff;
  return 0;
}
