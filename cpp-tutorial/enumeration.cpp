#include <iostream>

using namespace std;

// Declaring enum
enum Week
{
    Mon,
    Tue,
    Wed,
    Thur,
    Fri,
    Sat,
    Sun
};

void runEnumerationExample()
{
    // Creating enum variable
    Week day;

    // Assigning value to the variable
    day = Wed;

    cout << "enum value is: " << day << endl;
}
