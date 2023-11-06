#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    string make;
    string model;
    int year;

public:
    // Setter methods
    void setMake(string make) {
        this->make = make;
    }

    void setModel(string model) {
        this->model = model;
    }

    void setYear(int year) {
        if (year >= 1900 && year <= 2023) {
            this->year = year;
        } else {
            cout << "Invalid year!\n";
        }
    }

    // Getter methods
    string getMake() {
        return make;
    }

    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }
};

int main() {
    Car myCar;
    myCar.setMake("Toyota");
    myCar.setModel("Corolla");
    myCar.setYear(2020);

    cout << "Car Details:\n";
    cout << "Make: " << myCar.getMake() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;

    return 0;
}
