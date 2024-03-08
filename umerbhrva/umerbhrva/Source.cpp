#include <iostream>
#include <cmath>

using namespace std;

// Function to add two numbers
double add(double x, double y) {
    return x + y;
}

// Function to subtract two numbers
double subtract(double x, double y) {
    return x - y;
}

// Function to multiply two numbers
double multiply(double x, double y) {
    return x * y;
}

// Function to divide two numbers
double divide(double x, double y) {
    return x / y;
}

// Function to find the modulus of two numbers
int modulus(int x, int y) {
    return x % y;
}

// Function to find the exponentiation of two numbers
double exponentiation(double x, double y) {
    return pow(x, y);
}

// Function to display the menu options
void display_menu() {
    cout << "Please select an operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Modulus" << endl;
    cout << "6. Exponentiation" << endl;
    cout << "7. Quit" << endl;
}

int main() {
    while (true) {
        // Display the menu
        display_menu();

        // Get the user's choice
        int choice;
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        // Perform the chosen operation
        double x, y;
        switch (choice) {
        case 1:
            cout << "Enter the first number: ";
            cin >> x;
            cout << "Enter the second number: ";
            cin >> y;
            cout << "Result: " << add(x, y) << endl;
            break;
        case 2:
            cout << "Enter the first number: ";
            cin >> x;
            cout << "Enter the second number: ";
            cin >> y;
            cout << "Result: " << subtract(x, y) << endl;
            break;
        case 3:
            cout << "Enter the first number: ";
            cin >> x;
            cout << "Enter the second number: ";
            cin >> y;
            cout << "Result: " << multiply(x, y) << endl;
            break;
        case 4:
            cout << "Enter the first number: ";
            cin >> x;
            cout << "Enter the second number: ";
            cin >> y;
            if (y == 0) {
                cout << "Error: division by zero" << endl;
            }
            else {
                cout << "Result: " << divide(x, y) << endl;
            }
            break;
        case 5:
            int a, b;
            cout << "Enter the first integer: ";
            cin >> a;
            cout << "Enter the second integer: ";
            cin >> b;
            cout << "Result: " << modulus(a, b) << endl;
            break;
        case 6:
            cout << "Enter the base: ";
            cin >> x;
            cout << "Enter the exponent: ";
            cin >> y;
            cout << "Result: " << exponentiation(x, y) << endl;
            break;
        case 7:
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }
    return 0;
}
