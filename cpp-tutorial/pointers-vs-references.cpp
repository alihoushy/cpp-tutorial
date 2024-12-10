// https://www.geeksforgeeks.org/pointers-vs-references-cpp/

#include <iostream>
using namespace std;

void runPointersVsReferencesExample()
{
    // Initialization
    int index = 1;          // Declare and initialize an integer variable
    int *indexPtr = &index; // Pointer to index
    int &indexRef = index;  // Reference to index

    cout << "Value of index using pointer: " << *indexPtr << endl;
    cout << "Value of index using reference: " << indexRef << endl;

    // --------------------
    // Reassignment
    int firstNumber = 5, secondNumber = 10;

    int *numberPtr = &firstNumber; // Pointer to firstNumber
    cout << "Pointer points to firstNumber: " << *numberPtr << endl;

    numberPtr = &secondNumber; // Pointer now points to secondNumber
    cout << "Pointer points to secondNumber: " << *numberPtr << endl;

    int thirdNumber = 15;
    int &thirdRef = thirdNumber; // Reference to thirdNumber

    cout << "Reference to thirdNumber: " << thirdRef << endl;

    int &aliasOfThirdRef = thirdRef; // Alias reference to thirdNumber
    cout << "Alias reference to thirdNumber: " << aliasOfThirdRef << endl;

    // --------------------
    // Memory Address
}
