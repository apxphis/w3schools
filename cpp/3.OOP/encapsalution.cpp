/*
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class).
If you want others to read or modify the value of a private member, you can provide public get and set methods.
*/

#include <iostream>
using namespace std;

class Employee {
  private:
    double wage;
  public:
    // setter
    void setWage(double w) {
      wage = w;
    }
    // getter
    double getWage() {
      return wage;
    }
};

int main() {
  Employee Spencer;
  Spencer.setWage(15.4);
  cout << Spencer.getWage();
  return 0;
}
