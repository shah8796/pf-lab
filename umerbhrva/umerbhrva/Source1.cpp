#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the factorial of a number
double Factorial(int n) {
    double fact = 1.0;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate the power of a number
double Power(double x, int y) {
    double result = 1.0;
    for (int i = 1; i <= y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    double x, sinx = 0.0;
    int n;

    // Get the values of x and n from the user
    cout << "Enter the value of x in degrees: ";
    cin >> x;
    cout << "Enter the value of n: ";
    cin >> n;

    // Convert degrees to radians
    x = x * M_PI / 180.0;

    // Compute the value of sin(x)
    for (int i = 0; i <= n; i++) {
        double term = Power(-1, i) * Power(x, 2 * i + 1) / Factorial(2 * i + 1);
        sinx += term;
    }

    // Print the result
    cout << "The value of sin(" << x << ") is " << sinx << endl;

    return 0;
}
