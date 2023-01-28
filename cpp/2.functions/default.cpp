#include <iostream>
using namespace std;

void Home(string name, string country = "United States") {
  cout << name << "'s home country is " << country << '.\n';
}

int main() {
  Home("Mevia");
  Home("Alexander", "Germany");
  Home("Felix", "Poland");
  return 0;
}
