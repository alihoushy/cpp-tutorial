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
}
