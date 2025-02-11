// https://www.geeksforgeeks.org/functions-in-cpp/
// https://www.geeksforgeeks.org/tail-vs-non-tail-recursion/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to calculate factorial using direct recursion
int factorial(int n) {
    if (n <= 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1); // Recursive case
}

void verificationSystem(const string& message, int attempts); // Forward declaration

void userSystem(const string& message, int attempts) {
    if (attempts > 0) {
        cout << "UserSystem: Sending message to VerificationSystem: \"" << message << "\"\n";
        verificationSystem(message, attempts - 1); // Call VerificationSystem
    } else {
        cout << "UserSystem: No more attempts left. Stopping.\n";
    }
}

void verificationSystem(const string& message, int attempts) {
    if (attempts > 0) {
        cout << "VerificationSystem: Processing message: \"" << message << "\"\n";
        cout << "VerificationSystem: Sending confirmation back to UserSystem.\n";
        userSystem(message, attempts - 1); // Call UserSystem
    } else {
        cout << "VerificationSystem: No more attempts left. Stopping.\n";
    }
}

// Tail-recursive function to calculate the sum of numbers
int sumTailRecursive(const vector<int>& numbers, int index, int accumulator) {
    if (index == numbers.size()) {
        return accumulator; // Base case: return the accumulated sum
    }
    return sumTailRecursive(numbers, index + 1, accumulator + numbers[index]); // Tail recursion
}

// Non-tail recursive function to reverse a string
string reverseString(const string& str) {
    if (str.empty()) {
        return ""; // Base case: an empty string
    }
    return reverseString(str.substr(1)) + str[0]; // Non-tail recursion
}

void runRecursionExamples() {
    // Indirect Recursion
    string message = "Hello, this is a test message!\n";
    int maxAttempts = 3;

    // Start the communication process
    userSystem(message, maxAttempts);

    // --------------------
    // Demonstrate factorial calculation (Direct Recursion)
    int number = 5;

    int result = factorial(number);

    cout << "Calculating factorial of " << number << "..." << endl;
    cout << "Factorial of " << number << " is: " << result << endl;

    // --------------------
    // Tail Recursion
    vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = sumTailRecursive(numbers, 0, 0); // Start with index 0 and accumulator 0
    cout << "Tail Recursive Sum: " << sum << endl;

    // --------------------
    // Non-Tail Recursion
    string input = "Recursion";
    string reversed = reverseString(input);
    cout << "Non-Tail Recursive Reversed String: " << reversed << endl;
}
