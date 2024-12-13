// https://www.geeksforgeeks.org/functions-in-cpp/

#include <iostream>
#include <string>

using namespace std;

void printString(string str)
{
    cout << str << endl;
}

// Note the 'const' to prevent modification
void printStringByRef(const string &str)
{
    cout << str << endl;
}

// Note the 'const' to prevent modification
void printStringByPointer(const string *str)
{
    cout << *str << endl;
}

void runStringExample()
{
    // Pass by Value
    string stringByValue = "This is pass string by value.";

    printString(stringByValue);
    
    // --------------------
    // Pass by Reference
    string stringByReference = "This is pass string by reference.";
    
    printStringByRef(stringByReference);

    // --------------------
    // Pass by Pointer
    string stringByPointer = "This is pass string by pointer.";
    
    printStringByPointer(&stringByPointer);
}
