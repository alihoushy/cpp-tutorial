// callback-functions.cpp - Demonstrating callback functions in C++
// https://www.geeksforgeeks.org/functions-in-cpp/

#include <iostream>
#include <functional>

// Define a callback function type using modern C++
using ActionCallback = std::function<void()>;

// Function that takes a callback function as an argument
void executeTask(ActionCallback customAction) {
    std::cout << "Executing the main task...\n";
    // Call the callback function
    customAction();
}

// Example callback function
void logCompletion() {
    std::cout << "Task completed successfully!\n";
}

// Example callback function with arguments
void logCustomMessage(const std::string& message) {
    std::cout << message << "\n";
}

// Example: Passing a lambda as a callback
void demonstrateLambdaCallback() {
    executeTask([]() {
        std::cout << "This is a lambda callback!\n";
    });
}

// Example: Passing a callback with arguments
void demonstrateCallbackWithArguments() {
    executeTask([]() {
        logCustomMessage("Callback with a custom message!");
    });
}

void runCallbackFunctionsExamples() {
    std::cout << "Running callback functions examples...\n";

    // Pass the callback function to executeTask
    std::cout << "\nExample 1: Simple callback function\n";
    executeTask(logCompletion);

    // Demonstrate using a lambda as a callback
    std::cout << "\nExample 2: Lambda callback\n";
    demonstrateLambdaCallback();

    // Demonstrate callback with arguments
    std::cout << "\nExample 3: Callback with arguments\n";
    demonstrateCallbackWithArguments();

    // --------------------
}
