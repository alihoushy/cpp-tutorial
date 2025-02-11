// arrays.cpp - Examples of array usage in C++

#include "arrays.h"
#include <iostream>
#include <array>

void demonstrateInitialization() {
    std::cout << "Array Initialization Examples:\n";

    // Initialize Array with Values
    int firstArray[5] = {1, 2, 3, 4, 5};
    std::cout << "firstArray: ";
    for (int val : firstArray) std::cout << val << " ";
    std::cout << "\n";

    // Initialize Array with Values and without Size
    int secondArray[] = {6, 7, 8, 9, 10};
    std::cout << "secondArray: ";
    for (int val : secondArray) std::cout << val << " ";
    std::cout << "\n";

    // Partially initialized array
    int partialArray[5] = {1, 2};
    std::cout << "partialArray: ";
    for (int val : partialArray) std::cout << val << " ";
    std::cout << "\n";
}

void demonstrateArrayTraversal() {
    std::cout << "\nArray Traversal Examples:\n";

    // Initialize Array after Declaration
    int array[10];
    for (int i = 0; i < 10; ++i) {
        array[i] = i * 2;
    }

    std::cout << "array: ";
    for (int val : array) std::cout << val << " ";
    std::cout << "\n";
}

void demonstrateArraySize() {
    std::cout << "\nArray Size Examples:\n";

    int array[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(array) / sizeof(array[0]);

    std::cout << "Size of array: " << size << "\n";
}

void demonstrateMultidimensionalArrays() {
    std::cout << "\nMultidimensional Array Examples:\n";

    // 2D Array
    int array2D[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    std::cout << "2D Array:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << array2D[i][j] << " ";
        }
        std::cout << "\n";
    }

    // 3D Array
    int array3D[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};

    std::cout << "3D Array:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                std::cout << array3D[i][j][k] << " ";
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }
}

void runArraysExamples() {
    demonstrateInitialization();
    demonstrateArrayTraversal();
    demonstrateArraySize();
    demonstrateMultidimensionalArrays();
}
