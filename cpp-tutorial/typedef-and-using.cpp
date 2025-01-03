#include <iostream>

using namespace std;

// Using typedef to define a new name for existing type
typedef float f;

// Using 'using' to define a new name for existing type
using integer = int;

void runTypedefAndUsingExample()
{
    // Declaring variables using new type names
    f piNumber = 3.14;
    integer zeroNumber = 0;

    cout << "Float Value: " << piNumber << endl;
    cout << "Integer Value: " << zeroNumber << endl;
}
