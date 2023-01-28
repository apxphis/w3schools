#include <iostream>
using namespace std;

class Person {
  public:
    string name;
    int age;
    double height;
    char firstIntial, middleInitial, lastInitial;
};

int main() {
  Person Mevia; // create a new object in the Person class

  // access and set values
  Mevia.name = "Mevia Jane Nelson";
  Mevia.age = 16;
  Mevia.height = 180.4;
  Mevia.firstIntial = 'M';
  Mevia.middleInitial = 'J';
  Mevia.lastInitial = 'N';

  Person Alexander;
  Alexander.name = "Alexander Gilmore";
  Alexander.age = 16;
  Alexander.height = 170.5;
  Alexander.firstIntial = 'A';
  Alexander.lastInitial = 'G';

  cout << Mevia.name << " - " << Mevia.age << " - " << Mevia.height << '\n';
  cout << Alexander.name << " - " << Alexander.age << " - " << Alexander.height;
  return 0;
}
