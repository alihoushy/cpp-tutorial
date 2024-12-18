#include <iostream>
#include <string>
using namespace std;

// Forward declaration of ServiceCenter
class ServiceCenter;

class Car {
private:
    string ownerName;
    string carModel;
    double mileage;

public:
    // Constructor
    Car(string owner, string model, double mileage) : ownerName(owner), carModel(model), mileage(mileage) {}

    // Friend function declaration
    friend void displayCarDetails(const Car& car);

    // Friend class declaration
    friend class ServiceCenter;

    // Public method for the Car owner to drive
    void drive(double distance) {
        mileage += distance;
        cout << ownerName << " drove the " << carModel << " for " << distance << " miles. New mileage: " << mileage << endl;
    }
};

class ServiceCenter {
public:
    // Service the car: access private members using friend class privilege
    void performService(Car& car) {
        cout << "Servicing the car owned by: " << car.ownerName << endl;
        cout << "Car Model: " << car.carModel << ", Current Mileage: " << car.mileage << endl;
        cout << "Service completed. The car is in top condition!\n";
    }
};

// Friend function definition
void displayCarDetails(const Car& car) {
    cout << "Car Owner: " << car.ownerName << endl;
    cout << "Car Model: " << car.carModel << endl;
    cout << "Mileage: " << car.mileage << " miles\n";
}

void runFriendClassAndFunctionExample()
{
    // Create a Car object
    Car myCar("Alice", "Toyota Corolla", 15000);

    // Display car details using a friend function
    cout << "Displaying car details using a friend function:\n";
    displayCarDetails(myCar);

    // Drive the car
    myCar.drive(200);

    // Service the car using ServiceCenter
    ServiceCenter center;
    cout << "\nServicing the car using a friend class:\n";
    center.performService(myCar);
}
