#include <iostream>
#include <string>

using namespace std;

int main() {
    int basic_pay, age, bonus = 0;
    string position, gender;

    cout << "Enter the employee's basic pay: ";
    cin >> basic_pay;
    cout << "Enter the employee's position (junior/senior/executive): ";
    cin >> position;
    cout << "Enter the employee's gender (male/female): ";
    cin >> gender;
    cout << "Enter the employee's age: ";
    cin >> age;

    if (gender == "male") {
        if (age > 30 && position == "executive") {
            bonus = 0.25 * basic_pay;
        }
        else if (age > 30 && position == "senior") {
            bonus = 0.21 * basic_pay;
        }
        else if (age < 30 && position == "junior") {
            bonus = 0.17 * basic_pay;
        }
    }
    else if (gender == "female") {
        if (age < 25 && basic_pay > 25000) {
            bonus = 0.20 * basic_pay;
        }
        else if (age > 25 && basic_pay > 50000) {
            bonus = 0.25 * basic_pay;
        }
    }

    if (bonus > 0) {
        cout << "The employee's bonus is: " << bonus << endl;
    }
    else {
        cout << "The organization will not give a bonus." << endl;
    }

    return 0;
}