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
    int fifthNumber = 20;
    int &fifthNumberRef = fifthNumber; // Reference to fifthNumber

    cout << "Memory address of fifthNumber: " << &fifthNumber << endl;
    cout << "Memory address of fifthNumberRef: " << &fifthNumberRef << endl;

    // --------------------
    // Null Value
    // A pointer can be assigned NULL directly, whereas a reference cannot be.

    // --------------------
    // Indirection
    // We can have a pointer to pointer, known as a double pointer
    int sixthNumber = 25;
    int *sixthNumberRef;
    int **refToSixthNumberRef;

    sixthNumberRef = &sixthNumber; // Reference to sixthNumber
    refToSixthNumberRef = &sixthNumberRef; // Reference to sixthNumberRef

    cout << "Reference to sixthNumber: " << sixthNumberRef << endl;
    cout << "Reference to sixthNumberRef: " << refToSixthNumberRef << endl;

    // --------------------
    // Conclusion
    // Ultimately, the choise between references and pointers depends on your specifics needs. References are more suitable for situations where simplicity and code readability are important, white pointers are more applicable for more complex tasks and when you need finer control over memory management.
}
