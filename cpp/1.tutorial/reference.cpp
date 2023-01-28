#include <iostream>
using namespace std;

int main() {
  string food = "Fried Bread";
  string &meal = food;

  cout << food << '\n'; // outputs 'Fried Bread'
  cout << meal << '\n'; // outputs 'Fried Bread'
  cout << &food; // outputs '0x7ffd62010cb0'
}
