#include <iostream>
#include <cmath>

using namespace std;

bool check_power(double num1, double num2, double num3) {
    if (pow(num1, num2) == num3) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    double num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    if (check_power(num1, num2, num3)) {
        cout << "The first number to the power of the second number equals the third number." << endl;
    }
    else {
        cout << "The first number to the power of the second number is not equal to the third number." << endl;
    }
    return 0;
}
