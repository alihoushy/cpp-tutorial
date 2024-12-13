//https://www.geeksforgeeks.org/functions-in-cpp/

#include <iostream>

using namespace std;

// Define a callback function type
typedef void (*ActionCallback)();

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

void runCallbackFunctionsExample() {
    // Pass the callback function to executeTask
    executeTask(logCompletion);
    
    // --------------------
}
