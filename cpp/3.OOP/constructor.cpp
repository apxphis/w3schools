#include <iostream>
using namespace std;

class mevia {
  public:
    mevia() { // this is automatically called when the class is declared
      cout << "hello! i am mevia!";
    }
};

int main() {
  mevia();
  return 0;
}
