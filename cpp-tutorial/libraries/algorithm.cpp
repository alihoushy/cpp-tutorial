// https://www.programiz.com/cpp-programming/algorithm

#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

// Primary template for generic types (not implemented)
template <typename T>
void printVectorElements(const vector<T>& vec);

// Specialization for int
template <>
void printVectorElements<int>(const vector<int>& vec) {
    for (int element : vec) {
        printf("%d ", element); // %d for integers
    }
    printf("\n");
}

// Specialization for double
template <>
void printVectorElements<double>(const vector<double>& vec) {
    for (double element : vec) {
        printf("%f ", element); // %f for floating-point numbers
    }
    printf("\n");
}

// Specialization for string
template <>
void printVectorElements<string>(const vector<string>& vec) {
    for (const string& element : vec) {
        printf("%s ", element.c_str()); // %s for C-style strings
    }
    printf("\n");
}

void runAlgorithmExample() {
    vector<int> firstVector = { 66, 3, 33, 9, 99, 6 };
    
    printf("Before sort: ");
    
    // Printing the elements of the sorted vector
    printVectorElements(firstVector);
    
    // Sorts the elements of the vector
    sort(firstVector.begin(), firstVector.end());
    
    printf("After sort: ");
    
    // Printing the elements of the sorted vector
    printVectorElements(firstVector);
    printf("\n");
    
    // --------------------
    
    vector<int> firstSourceVector = { 3, 33, 333 };
    
    // Create destination vector of size 3
    vector<int> firstDestinationVector(3);
    
    printf("Before copy\n");
    
    // Print elements of the source vector
    printf("source: ");
    printVectorElements(firstSourceVector);
    
    // Print elements of the destination vector
    printf("destination: ");
    printVectorElements(firstDestinationVector);
    
    // Copy the contents of source to the destination
    copy(firstSourceVector.begin(), firstSourceVector.end(), firstDestinationVector.begin());
    
    printf("After copy\n");
    
    // Print elements of the source vector
    printf("source: ");
    printVectorElements(firstSourceVector);
    
    // Print elements of the destination vector
    printf("destination: ");
    printVectorElements(firstDestinationVector);
    printf("\n");
    
    // --------------------
    
    vector<string> secondSourceVector = { "three", "six", "nine" };
    
    // Create destination vector of size 3
    vector<string> secondDestinationVector(3);
    
    printf("Before move\n");
    
    // Print elements of the source vector
    printf("source: ");
    printVectorElements(secondSourceVector);
    
    // Print elements of the destination vector
    printf("destination: ");
    printVectorElements(secondDestinationVector);
    
    // Perform the move operation
    move(secondSourceVector.begin(), secondSourceVector.end(), secondDestinationVector.begin());
    
    printf("After move\n");
    
    // Print elements of the source vector
    printf("source: ");
    printVectorElements(secondSourceVector);
    
    // Print elements of the destination vector
    printf("destination: ");
    printVectorElements(secondDestinationVector);
    printf("\n");
    
    // --------------------
    // swap()

    // --------------------
    // merge()
    
    // --------------------
    // replace()
    
    // --------------------
    // remove()
    
    // --------------------
    // search()
    
    // --------------------
}
