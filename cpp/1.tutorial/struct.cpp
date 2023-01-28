#include <iostream>
using namespace std;

int main() {
  struct {
    string name;
    int age;
    double height;
  } mevia;

  mevia.name = "Mevia Jane Nelson";
  mevia.age = 16;
  mevia.height = 180.4;

  cout << mevia.name << '\n';
  cout << mevia.age << '\n';
  cout << mevia.height;
}
