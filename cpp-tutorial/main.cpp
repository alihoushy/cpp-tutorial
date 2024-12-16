#include <iostream>

using namespace std;

// Function prototypes
void runFunctionsExample();
void runPointersVsReferencesExample();
void runCallbackFunctionsExample();
void runStringExample();
void runRecursionExample();
void runOverloadingExample();

int main(int argc, const char * argv[]) {
    cout << "Running functions example:\n";
    runFunctionsExample();

    cout << "\nRunning pointers vs references example:\n";
    runPointersVsReferencesExample();

    cout << "\nRunning callback function example:\n";
    runCallbackFunctionsExample();

    cout << "\nRunning string example:\n";
    runStringExample();

    cout << "\nRunning recursion example:\n";
    runRecursionExample();

    cout << "\nRunning overloading example:\n";
    runOverloadingExample();
}
