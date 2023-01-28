#include <iostream>
using namespace std;

class Person {
  public:
    string name;
    int age;
  private:
    string birthday;
    // note that anything declared outside of a specificer is private by default, for example:
    /*
    class Person {
      string birthday;
      public:
        string name;
        int age;
  }
    */
    // this is the same as what i've coded above outside of the comment
};

int main() {
  Person Mevia;
  Mevia.name = "Mevia Jane Nelson";
  Mevia.age = 16;
  cout << Mevia.name << " - " << Mevia.age;
}
