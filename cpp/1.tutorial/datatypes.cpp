#include <iostream>
using namespace std;

int main() {
  int myNum = 16;
  float myFloat = 180.4;
  double myDub = 240.40;
  char myFirstInitial = 'M', myMiddleInitial = 'J', myLastInitial = 'N';
  bool isSmart = true;
  string myName = "Mevia Nelson";

  cout << "I am " << myName << '\n';
  cout << "I am " << myNum << " years old." << '\n';
  cout << "I am " << myFloat << " cm tall." << '\n';
  cout << "I weigh " << myDub << " lbs." << '\n';
  cout << "My intials are " << myFirstInitial << myMiddleInitial << myLastInitial << '\n';
  cout << "I am smart:  " << isSmart;
}
