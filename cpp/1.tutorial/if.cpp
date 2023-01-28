#include <iostream>
using namespace std;

int main() {
  int x, y, z;
  x = 10, y = 5, z = 10;
  if (x > y) {
    cout << "x is greater than y";
  } else if (x < y) {
    cout << "y is greater than x";
  } else {
    cout << "there has been an error"
  }
  
  return 0;
}
