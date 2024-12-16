// https://www.geeksforgeeks.org/functions-in-cpp/

#include <iostream>
#include <vector>

using namespace std;

// Function to find the maximum of two numbers
int max(int x, int y)
{
    return (x > y) ? x : y;
}

// Function to modify a value using a pointer
void fun(int* ptr)
{
    *ptr = 85;
}

// Function to create an array from size, and return a pointer to the array
int* createArray(int size)
{
    int* arr = new int[size]; // Dynamically allocate mameory for an array

    for (int i = 0; i < size; ++i)
    {
        arr[i] = i * 10; // Initialize array elements
    }

    return arr; // Return the pointer to the array
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

void printMinimumNumber(const vector<int>& arr)
{
    size_t arrayLength = arr.size(); // Get the size of the vector dynamically

    // Find the minimum number
    int minNumber = arr[0]; // Initialize with the first element
    for (size_t i = 1; i < arrayLength; ++i) {
        if (arr[i] < minNumber) {
            minNumber = arr[i];
        }
    }

    cout << "Minimum number in the array: " << minNumber << endl;
}

void runFunctionsExample()
{
    int firstNumber = 10, secondNumber = 20;
    
    int biggerNumber = max(firstNumber, secondNumber);
    
    cout << "Bigger number is: " << biggerNumber << endl;
    
    // --------------------

    int funnyNumber = 65;
    
    fun(&funnyNumber);
    
    cout << "Funny number is: " << funnyNumber << endl;
    
    // --------------------
    
    int arraySize = 10;
    int* firstArray = createArray(arraySize);
    
    // Print the array
    for (int i = 0; i < arraySize; ++i)
    {
        cout << firstArray[i] << " ";
    }
    cout << endl;
    
    delete[] firstArray; // Don't forget to free the allocated memory
    
    // --------------------
    
    // Declare and initialize an array of function pointers
    int (*functionArray[3])(int, int) = { add, subtract, multiply };
    int thirdNumber = 5, fourthNumber = 10;
    
    // Access and call the functions using the array of function pointers
    cout << "Add: " << functionArray[0](thirdNumber, fourthNumber) << endl;
    cout << "Subtract: " << functionArray[1](thirdNumber, fourthNumber) << endl;
    cout << "Multiply: " << functionArray[2](thirdNumber, fourthNumber) << endl;
    
    // --------------------
    // Passing array to function
    vector<int> secondArray = { 30, 5, 10, 20, 15, 25 };

    printMinimumNumber(secondArray);
    
    // --------------------
}
