#include <iostream>
#include <limits> // For numeric_limits
#define PI 3.14159   // Macro constant for Pi
#define MAX_ATTEMPTS 5 // Macro constant for maximum attempts

using namespace std;

void runDataTypesExamples() {
    // Macro Constants
    cout << "Macro Constants:" << endl;
    cout << "PI: " << PI << endl;
    cout << "MAX_ATTEMPTS: " << MAX_ATTEMPTS << endl;
    cout << endl;

    // Integer Types with Modifiers
    signed int signedInt = -100;
    unsigned int unsignedInt = 100;
    short shortInt = 32767;
    unsigned short unsignedShort = 65535;
    long longInt = 100000L;
    unsigned long unsignedLong = 100000UL;

    cout << "Integer Types with Modifiers:" << endl;
    cout << "signed int: " << signedInt << ", Size: " << sizeof(signedInt) << " bytes" << endl;
    cout << "unsigned int: " << unsignedInt << ", Size: " << sizeof(unsignedInt) << " bytes" << endl;
    cout << "short: " << shortInt << ", Size: " << sizeof(shortInt) << " bytes" << endl;
    cout << "unsigned short: " << unsignedShort << ", Size: " << sizeof(unsignedShort) << " bytes" << endl;
    cout << "long: " << longInt << ", Size: " << sizeof(longInt) << " bytes" << endl;
    cout << "unsigned long: " << unsignedLong << ", Size: " << sizeof(unsignedLong) << " bytes" << endl;
    cout << endl;

    // Floating-point Types
    float floatVar = 3.14159f;
    double doubleVar = 2.7182818284;
    long double longDoubleVar = 1.41421356237L;

    cout << "Floating-point Types:" << endl;
    cout << "float: " << floatVar << ", Size: " << sizeof(floatVar) << " bytes" << endl;
    cout << "double: " << doubleVar << ", Size: " << sizeof(doubleVar) << " bytes" << endl;
    cout << "long double: " << longDoubleVar << ", Size: " << sizeof(longDoubleVar) << " bytes" << endl;
    cout << endl;

    // Character Types with Modifiers
    char charVar = 'A';
    signed char signedChar = -65;
    unsigned char unsignedChar = 200;
    wchar_t wideChar = L'Ω';

    cout << "Character Types with Modifiers:" << endl;
    cout << "char: " << charVar << ", ASCII Value: " << static_cast<int>(charVar) << ", Size: " << sizeof(charVar) << " bytes" << endl;
    cout << "signed char: " << static_cast<int>(signedChar) << ", Size: " << sizeof(signedChar) << " bytes" << endl;
    cout << "unsigned char: " << static_cast<int>(unsignedChar) << ", Size: " << sizeof(unsignedChar) << " bytes" << endl;
    wcout << L"wchar_t: " << wideChar << ", Size: " << sizeof(wideChar) << " bytes" << endl;
    cout << endl;

    // Boolean Type
    bool boolVar = true;

    cout << "Boolean Type:" << endl;
    cout << "bool: " << boolVar << ", Size: " << sizeof(boolVar) << " bytes" << endl;
    cout << endl;

    // Demonstrate Limits of Each Type
    cout << "Limits of Data Types:" << endl;
    cout << "signed int: Min = " << numeric_limits<signed int>::min() << ", Max = " << numeric_limits<signed int>::max() << endl;
    cout << "unsigned int: Min = 0, Max = " << numeric_limits<unsigned int>::max() << endl;
    cout << "short: Min = " << numeric_limits<short>::min() << ", Max = " << numeric_limits<short>::max() << endl;
    cout << "unsigned short: Min = 0, Max = " << numeric_limits<unsigned short>::max() << endl;
    cout << "float: Min = " << numeric_limits<float>::min() << ", Max = " << numeric_limits<float>::max() << endl;
    cout << "double: Min = " << numeric_limits<double>::min() << ", Max = " << numeric_limits<double>::max() << endl;
    cout << "long double: Min = " << numeric_limits<long double>::min() << ", Max = " << numeric_limits<long double>::max() << endl;
    cout << "char: Min = " << static_cast<int>(numeric_limits<char>::min())
         << ", Max = " << static_cast<int>(numeric_limits<char>::max()) << endl;
    cout << "bool: False = " << numeric_limits<bool>::min() << ", True = " << numeric_limits<bool>::max() << endl;
}
