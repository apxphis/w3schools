#include <iostream>
using namespace std;

void GreetName(string name, int age) {
  cout << "Hello, " << name << "! I am told you are " << age << " years old!\n";
}

int main() {
  GreetName("Mevia", 16);
  GreetName("Alex", 16);
  return 0;
}
