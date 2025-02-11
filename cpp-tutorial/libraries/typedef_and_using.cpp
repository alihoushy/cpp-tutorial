// https://www.geeksforgeeks.org/typedef-in-cpp/
// https://www.geeksforgeeks.org/using-keyword-in-cpp-stl/

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <functional>

// Typedef examples
typedef float f; // Using typedef with predefined data types
typedef std::vector<int> IntVector; // Using typedef with STL data structures
typedef int IntArray[10]; // Using typedef with arrays
typedef int* IntPointer; // Using typedef with normal pointers
typedef void (*FunctionPointer)(int); // Using typedef with function pointers

// Using examples
using integer = int; // Using for aliasing
using StringMap = std::map<std::string, std::string>; // Using with STL data structures
using MathFunction = std::function<double(double)>; // Using for function pointers
using namespace std::string_literals; // Using for namespaces (string literals)

// A sample function to demonstrate typedef with function pointers
void printNumber(int num) {
    std::cout << "Number: " << num << std::endl;
}

void runTypedefAndUsingExamples() {
    // Examples for typedef
    std::cout << "===== Typedef Examples =====" << std::endl;
    
    // Using typedef with predefined data types
    f piNumber = 3.14f;
    std::cout << "Float Value: " << piNumber << std::endl;

    // Using typedef with STL data structures
    IntVector numbers = { 1, 2, 3, 4, 5 };
    std::cout << "Vector Elements: ";
    for (int num : numbers) std::cout << num << " ";
    std::cout << std::endl;

    // Using typedef with arrays
    IntArray arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::cout << "Array Elements: ";
    for (int i = 0; i < 10; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;

    // Using typedef with normal pointers
    IntPointer ptr = &arr[5];
    std::cout << "Pointer Value: " << *ptr << std::endl;

    // Using typedef with function pointers
    FunctionPointer func = printNumber;
    func(42);

    // Examples for using
    std::cout << "\n===== Using Examples =====" << std::endl;

    // Using for aliasing
    integer zeroNumber = 0;
    std::cout << "Integer Value: " << zeroNumber << std::endl;

    // Using with STL data structures
    StringMap dictionary = {
        { "key1", "value1" },
        { "key2", "value2" }
    };
    std::cout << "Map Contents:" << std::endl;
    for (const auto& [key, value] : dictionary) {
        std::cout << "  " << key << ": " << value << std::endl;
    }

    // Using for function pointers
    MathFunction square = [](double x) { return x * x; };
    std::cout << "Square of 3.0: " << square(3.0) << std::endl;

    // Using for namespaces
    auto myString = "Hello, "s + "world!";
    std::cout << "Concatenated String: " << myString << std::endl;
}
