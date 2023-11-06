#include <iostream>
#include <string>
using namespace std;
// Base class
class Animal {
protected:
    string name;

public:
    Animal(string name) : name(name) {}

    void sound() {
        cout << "Animal sound\n";
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

// Derived class inheriting from Animal
class Dog : public Animal {
private:
    string breed;

public:
    Dog(string name, string breed) : Animal(name), breed(breed) {}

    void sound() {
        cout << "Dog barks\n";
    }

    void display() {
        Animal::display(); // Call base class display function
        cout << "Breed: " << breed << endl;
    }
};

int main() {
    Dog myDog("Buddy", "Golden Retriever");   
    myDog.sound(); // Calls derived class sound function
    myDog.display(); // Calls derived class display function

    return 0;
}
