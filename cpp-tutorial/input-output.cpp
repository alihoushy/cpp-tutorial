#include <iostream>
#include <string>

using namespace std;

void runInputOutputExamples()
{
    string name;
    int age;

    // Input (cin)
    cout << "Enter your name: ";
    cin >> name; // Accept user input for name

    cout << "Enter your age: ";
    cin >> age; // Accept user input for age

    // Output (cout)
    cout << "\nHello, " << name << "! You are " << age << " years old.\n";

    // Error message (cerr)
    if (age < 0) {
        cerr << "Error: Age cannot be negative!\n";
    }

    // Log message (clog)
    clog << "Log: User " << name << " entered age " << age << ".\n";
}
