/*
When executing C++ code, different errors can occur: coding errors made by the programmer, errors due to wrong input, or other unforeseeable things.

When an error occurs, C++ will normally stop and generate an error message.
The technical term for this is: C++ will throw an exception (throw an error).
*/

#include <iostream>
using namespace std;

/*
int main() {
  try {
    // the code to try
    throw exception; // throw an exception when something goes wrong
  }
  catch() {
    // code that will handle errors
  }
}
*/
int main() {
try {
  int age = 15;
  if (age >= 18) {
    cout << "Access granted - you are old enough.";
  } else {
    throw (age);
  }
}
catch (int myNum) {
  cout << "Access denied - You must be at least 18 years old.\n";
  cout << "Age is: " << myNum;
}
}
