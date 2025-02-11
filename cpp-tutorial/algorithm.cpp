// algorithm.cpp - Demonstrating STL algorithms in C++
// https://www.programiz.com/cpp-programming/algorithm

#include <algorithm>
#include <vector>
#include <iostream>
#include <numeric>
#include <string>

// Utility function to print vector elements
template <typename T>
void printVectorElements(const std::vector<T>& vec) {
    for (const auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

// Sorting example
void demonstrateSort() {
    std::vector<int> vec = {66, 3, 33, 9, 99, 6};
    std::sort(vec.begin(), vec.end(), std::greater<int>());
    std::cout << "Sorted (descending): ";
    printVectorElements(vec);
}

// Copying example
void demonstrateCopy() {
    std::vector<int> source = {3, 33, 333};
    std::vector<int> destination(3);
    std::copy(source.begin(), source.end(), destination.begin());
    std::cout << "Copied vector: ";
    printVectorElements(destination);
}

// Moving example
void demonstrateMove() {
    std::vector<std::string> source = {"three", "six", "nine"};
    std::vector<std::string> destination(3);
    std::move(source.begin(), source.end(), destination.begin());
    std::cout << "Moved vector: ";
    printVectorElements(destination);
}

// Swapping example
void demonstrateSwap() {
    std::vector<int> vec1 = {3, 33, 333};
    std::vector<int> vec2 = {9, 99, 999};
    std::swap(vec1, vec2);
    std::cout << "Swapped vectors:\nVector 1: ";
    printVectorElements(vec1);
    std::cout << "Vector 2: ";
    printVectorElements(vec2);
}

// Merging example
void demonstrateMerge() {
    std::vector<int> vec1 = {3, 3, 3};
    std::vector<int> vec2 = {6, 6, 6};
    std::vector<int> merged(6);
    std::merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), merged.begin());
    std::cout << "Merged vector: ";
    printVectorElements(merged);
}

// Replace example
void demonstrateReplace() {
    std::vector<int> vec = {1, 3, 6, 9, 11, 13};
    std::replace(vec.begin(), vec.end(), 9, 99);
    std::cout << "Replaced vector: ";
    printVectorElements(vec);
}

// Remove example
void demonstrateRemove() {
    std::vector<int> vec = {1, 3, 6, 9, 11, 13};
    auto newEnd = std::remove(vec.begin(), vec.end(), 3);
    vec.erase(newEnd, vec.end());
    std::cout << "Vector after removal: ";
    printVectorElements(vec);
}

// Reverse example
void demonstrateReverse() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::reverse(vec.begin(), vec.end());
    std::cout << "Reversed vector: ";
    printVectorElements(vec);
}

// Min and max examples
void demonstrateMinMax() {
    std::vector<int> vec = {10, 20, 30, 40, 50};
    auto maxElement = std::max_element(vec.begin(), vec.end());
    auto minElement = std::min_element(vec.begin(), vec.end());
    std::cout << "Maximum element: " << *maxElement << "\n";
    std::cout << "Minimum element: " << *minElement << "\n";
}

// Accumulate example
void demonstrateAccumulate() {
    std::vector<int> vec = {10, 20, 30, 40, 50};
    int sum = std::accumulate(vec.begin(), vec.end(), 0);
    std::cout << "Sum of elements: " << sum << "\n";
}

// Count example
void demonstrateCount() {
    std::vector<int> vec = {10, 20, 30, 40, 30};
    int count = std::count(vec.begin(), vec.end(), 30);
    std::cout << "Occurrences of 30: " << count << "\n";
}

// Find example
void demonstrateFind() {
    std::vector<int> vec = {10, 20, 30, 40, 50};
    auto found = std::find(vec.begin(), vec.end(), 40);
    if (found != vec.end()) {
        std::cout << "Element 40 found at position: " << std::distance(vec.begin(), found) << "\n";
    } else {
        std::cout << "Element 40 not found.\n";
    }
}

// Binary search example
void demonstrateBinarySearch() {
    std::vector<int> vec = {10, 20, 30, 40, 50};
    bool isPresent = std::binary_search(vec.begin(), vec.end(), 30);
    std::cout << "Is 30 present? " << (isPresent ? "Yes" : "No") << "\n";
}

// Lower and upper bound examples
void demonstrateBounds() {
    std::vector<int> vec = {10, 20, 30, 30, 40, 50};
    auto lower = std::lower_bound(vec.begin(), vec.end(), 30);
    auto upper = std::upper_bound(vec.begin(), vec.end(), 30);
    std::cout << "Lower bound of 30: " << std::distance(vec.begin(), lower) << "\n";
    std::cout << "Upper bound of 30: " << std::distance(vec.begin(), upper) << "\n";
}

void runAlgorithmExamples() {
    std::cout << "Running algorithm examples...\n";
    demonstrateSort();
    demonstrateCopy();
    demonstrateMove();
    demonstrateSwap();
    demonstrateMerge();
    demonstrateReplace();
    demonstrateRemove();
    demonstrateReverse();
    demonstrateMinMax();
    demonstrateAccumulate();
    demonstrateCount();
    demonstrateFind();
    demonstrateBinarySearch();
    demonstrateBounds();
}
