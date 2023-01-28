#include <iostream>
using namespace std;

//base class 'Person'
class Person {
  public:
    string name;
    int age;
    double height;
    void info() {
      cout << name << " - " << age << " - " << height << '\n';
    }
};

// derived class from Person
class Friend: public Person {
};

// derived class from Friend
class BestFriend: public Friend {
};

int main() {
  BestFriend Felix;
  Felix.name = "Felix Mazur";
  Felix.age = 16;
  Felix.height = 178.25;
  Felix.info();
  return 0;
}
