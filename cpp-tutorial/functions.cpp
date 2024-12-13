// https://www.geeksforgeeks.org/functions-in-cpp/

#include <iostream>
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
}
