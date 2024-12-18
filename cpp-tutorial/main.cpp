#include <iostream>

using namespace std;

// Function prototypes
void runFunctionsExample();
void runPointersVsReferencesExample();
void runCallbackFunctionsExample();
void runStringExample();
void runRecursionExample();
void runOverloadingExample();
void runFriendClassAndFunctionExample();
void runDataTypesExample();
void runInputOutputExample();

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

    cout << "\nRunning friend class and function example:\n";
    runFriendClassAndFunctionExample();

    cout << "\nRunning data types example:\n";
    runDataTypesExample();

    cout << "\nRunning input output example:\n";
    runInputOutputExample();
}
