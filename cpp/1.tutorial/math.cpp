#include <iostream>
using namespace std;

int main() {
    // our numbered variables
    int x = 1;
    int y = 2;
    int z = 10;
    // all the operations
    int sum = x + y;
    int difference = y - x;
    int product = y * z;
    int quotient = z / y;

    //printing the actual operations to the terminal
    cout << sum << '\n';
    cout << difference << '\n';
    cout << product << '\n';
    cout << quotient;

    return 0;
}
