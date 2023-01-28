#include <iostream>
using namespace std;

class Person {
  public:
    string name;
    void outName() {
      cout << name;
    }
};

class Friend: public Person {
  public:
    int age = 0;
};

int main() {
  Friend Bethany;
  Bethany.name = "Bethany Bevis";
  Bethany.outName();
  return 0;
}
