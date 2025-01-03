#include <iostream>

using namespace std;

void runArraysExample()
{
    // Initialize Array with Values
    int firstArray[5] = { 1, 2, 3, 4, 5 };

    // --------------------
    // Initialize Array with Values and without Size
    int secondArray[] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };

    // --------------------
    // Initialize Array after Declaration (Using Loops)
    int thirdArray[15];
    for (int i = 0; i < 15; ++i)
    {
        thirdArray[i] = i;
    }

    // --------------------
    // Initialize an array partially
    int partialArray[5] = { 1, 2 };

    // --------------------
    // Initialize the array with zero
    int zeroArray[5] = { 0 };

    // --------------------
    // Accessing an Element of an Array

    // --------------------
    // Insert Array Element
    // arr[i] = value;

    // --------------------
    // Update Array Element
    // arr[i] = new_value;

    // --------------------
    // Traverse an Array (Using for Loop)

    // --------------------
    // Size of an Array
    int fourthArray[] = { 1, 2, 3, 4, 5 };

    // Size of one element of an array
    cout << "Size of fourthArray[0]: " << sizeof(fourthArray[0]) << endl;

    // Size of array 'arr'
    cout << "Size of fourthArray: " << sizeof(fourthArray) << endl;

    // Length of an array
    int fourthArrayLength = sizeof(fourthArray) / sizeof(fourthArray[0]);

    cout << "Length of the fourthArray: " << fourthArrayLength << endl;

    // --------------------
    // Relation between Arrays and Pointers
    int fivethArray[] = { 3, 5, 7, 9, 11 };

    // Define a pointer
    int* fivethArrayPtr = fivethArray;

    // Printing address of the arrary using array name
    cout << "Memory address of fivethArray: " << &fivethArray << endl;

    // Printing address of the array using pointer
    cout << "Memory address of fivethArray: " << fivethArrayPtr << endl;

    // --------------------
    // Printing Array Elements without Indexing
    int sixthArray[] = { 11, 22, 33, 44 };

    // Print elements of an array
    cout << "elements of the sixthArray:" << endl;
    cout << "first: " << *sixthArray << endl;
    cout << "Second: " << *(sixthArray + 1) << endl;
    cout << "Third: " << *(sixthArray + 2) << endl;
    cout << "fourth: " << *(sixthArray + 3) << endl;

    // --------------------
    // Passing Array as a Pointer (to Function)
    // return_type function_name ( data_type *array_name ) {}

    // --------------------
    // Passing Array as an Unsized Array (to Function)
    // return_type function_name ( data_type array_name[] ) {}

    // --------------------
    // Passing Array as a Sized Array (to Function)
    // return_type function_name ( data_type array_name[size_of_array] ) {}

    // --------------------
    // Array Decay

    // --------------------
    // Multidimensional Arrays
    // Data_Type Array_Name[Size1][Size2]...[SizeN];

    // --------------------
    // Two-Dimensional Array (2D)
    // data_Type array_name[n][m];
    int seventhArray[4][4];

    // Initialize seventhArray using loop
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            seventhArray[i][j] = i + j;
        }
    }

    // Printing the element of seventhArray
    cout << "seventhArray:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << seventhArray[i][j] << " ";
        }
        cout << endl;
    }

    // --------------------
    // Three-Dimensional Array (3D)
    // data_Type array_name[d][r][c];
    int eighthArray[3][3][3];

    // initializing the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                eighthArray[i][j][k] = i + j + k;
            }
        }
    }

    // printing the array
    cout << "eighthArray:\n";
    for (int i = 0; i < 3; i++) {
        cout << i << "st layer:" << endl;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cout << eighthArray[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    
    // --------------------
}
