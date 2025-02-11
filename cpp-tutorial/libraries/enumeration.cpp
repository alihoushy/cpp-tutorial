#include <iostream>

// Define a macro for PI and a macro function for calculating the area of a circle
#define PI 3.14159
#define CIRCLE_AREA(radius) (PI * (radius) * (radius))

// 1. Days of the Week (Useful for representing weekly schedules or workdays.)
enum DaysOfWeek {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

// Function to get name of the day
std::string getDayName(DaysOfWeek day) {
    switch (day) {
        case Monday: return "Monday";
        case Tuesday: return "Tuesday";
        case Wednesday: return "Wednesday";
        case Thursday: return "Thursday";
        case Friday: return "Friday";
        case Saturday: return "Saturday";
        case Sunday: return "Sunday";
        default: return "Unknown";
    }
}

// 2. Log Levels (Defines application logging levels for debugging and monitoring.)
enum LogLevel {
    Info,
    Warning,
    Error,
    Debug
};

// 3. HTTP Response Status Codes (Maps HTTP status codes to readable values in web applications.)
enum HttpStatus {
    OK = 200,
    Created = 201,
    BadRequest = 400,
    UnAuthorized = 401,
    PaymentRequired = 402,
    Forbidden = 403,
    NotFound = 404,
    MethodNotAllowed = 405,
    NotAcceptable = 406,
    ProxyAuthenticationRequired = 407,
    RequestTimeout = 408,
    InternalServerError = 500,
    GatewayTimeout = 504
};

// 4. Traffic Light States (Simulates traffic light systems.)
enum TrafficLight {
    Red,
    Yellow,
    Green
};

// 5. File Permissions (Uses bitmasking to combine multiple permissions.)
enum FilePermission {
    Read = 1, // 0b001
    Write = 2, // 0b010
    Execute = 4 // 0b100
};

// 6. Card Suits (Represents the four suits in a standard deck of cards.)
enum CardSuit {
    Hearts,
    Diamonds,
    Clubs,
    Spades
};

// 7. User Roles in an Application (Defines user roles in access control systems.)
enum UserRole {
    Admin,
    Editor,
    Viewer
};

// 8. Month Names (Represents the months of the year in calendar applications.)
enum Month {
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
};

// 9. Error Codes (Standardizes error reporting in functions.)
enum ErrorCode {
    Success = 0,
    DataNotFound = 1,
    AccessDenied = 2,
    Timeout = 3
};

// 10. Game States (Models states in video games or simulation projects.)
enum GameState {
    MainMenu,
    Playing,
    Paused,
    GameOver
};

void runEnumerationExamples()
{
    // Example 0: Macro (Use the macro to calculate the area of a circle)
    double radius = 5.0;
    double area = CIRCLE_AREA(radius);
    std::cout << "The area of a circle with radius " << radius << " is: " << area << std::endl;

    // Example 1: Use DaysOfWeek
    DaysOfWeek day = Friday;
    std::cout << "Today is day: " << getDayName(day) << std::endl;
    
    // Example 2: Log Levels
    LogLevel logLevel = Error;
    std::cout << "Current log level: " << logLevel << std::endl;

    // Example 3: HTTP Status
    HttpStatus status = OK;
    std::cout << "HTTP Status: " << status << " (OK)" << std::endl;

    // Example 4: Traffic Light
    TrafficLight light = Green;
    if (light == Green) {
        std::cout << "Traffic Light: Go!" << std::endl;
    }

    // Example 5: File Permissions (Bitmasking)
    int permission = Read | Write;
    std::cout << "File Permission: " << permission << std::endl;

    // Example 6: Card Suits
    CardSuit suit = Spades;
    std::cout << "Card Suit: " << suit << std::endl;

    // Example 7: User Roles
    UserRole user = Editor;
    std::cout << "User Role: " << user << std::endl;

    // Example 8: Month Names
    std::cout << "Month: ";
    for (int month = January; month <= December; ++month) {
        std::cout << month;
        if (month != December)
            std::cout << ", ";
        else
            std::cout << std::endl;
    }

    // Example 9: Error Codes
    ErrorCode error = Timeout;
    std::cout << "Error Code: " << error << std::endl;

    // Example 10: Game States
    GameState game = Playing;
    std::cout << "Game State: " << game << std::endl;
}
