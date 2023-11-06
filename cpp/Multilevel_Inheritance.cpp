#include <iostream>
#include <string>
using namespace std;
// Base class
class Vehicle {
protected:
    string type;

public:
    Vehicle(string type) : type(type) {}

    void displayType() {
        cout << "Type: " << type << endl;
    }
};

// Derived class inheriting from Vehicle
class Car : public Vehicle {
private:
    string brand;

public:
    Car(string type, string brand) : Vehicle(type), brand(brand) {}

    void displayBrand() {
        cout << "Brand: " << brand << endl;
    }
};

// Derived class inheriting from Car
class Sedan : public Car {
private:
    int numberOfSeats;

public:
    Sedan(string type, string brand, int seats) : Car(type, brand), numberOfSeats(seats) {}

    void displaySeats() {
        cout << "Number of seats: " << numberOfSeats << endl;
    }
};

int main() {
    Sedan mySedan("Four-wheeler", "Toyota", 5);
    mySedan.displayType();  // Calls base class function
    mySedan.displayBrand(); // Calls immediate parent class function
    mySedan.displaySeats(); // Calls its own member function

    return 0;
}

