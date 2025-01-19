#include <iostream>

using namespace std;

// Defining a union
union Point {
    int i;
    char c;
};

// Creating a union-like class
class student {
public:
    // Declaring class data members.
    string name;

    // Creating a anonymous union without a name.
    union {
        // Defining data members
        int standard;
        char section;
    };
};

void runUnionExample()
{
    // Two different types of decleration:
    // union Union_Name var1;
    // Union_Name var1;

    // A union variable
    union Point point;

    // Assigning values to data member of union Point
    point.c = 'A';

    // Printing the values of data members
    cout << "point.i: " << point.i << ", point.c: " << point.c << endl;

    // Printing the memory address and sizeof the union Point
    cout << "Memory address of point.i: " << &point.i << endl;
    cout << "Memory address of point.c: " << &point.c << endl;
    cout << "Size of a union Point: " << sizeof(point) << endl;

    // --------------------

    // Creating a anonymous union without a name.
    union {
      int standard;
      char section;
    };

    // Assigning value to standard directly without any union variable.
    standard = 8;

    // Printing the value.
    cout << "Standard (from anonymous union) = " << standard << endl;

    // Assigning value to section
    section = 'A';

    // Printing the value
    cout << "Section (from anonymous union) = " << section << endl;

    // --------------------

    // Creating an object of myClass.
    student s1;

    // Assigning values to class members and printing them.
    s1.name = "geek";

    cout << "Name : " << s1.name << endl;

    // Assigning value to anonymous class member standard
    s1.standard = 9;
    cout << "Standard : " << s1.standard << endl;

    // Assigning value to anonymous class union member section
    s1.section = 'D';
    cout << "Section : " << s1.section << endl;

    // --------------------
}
