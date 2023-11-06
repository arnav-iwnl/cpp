#include <iostream>
#include <stdexcept> // Required for standard exception classes
using namespace std;
int main() {
    int numerator, denominator, result;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) {
            throw runtime_error("Divide by zero exception");
        }

        result = numerator / denominator;
        cout << "Result of division: " << result << endl;
    } catch (const exception& e) {
        cerr << "Exception caught: " << e.what() << endl;
    }

    return 0;
}

