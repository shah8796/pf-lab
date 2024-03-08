#include <iostream>
#include <cmath>

using namespace std;

double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double power(double x, int n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= x;
    }
    return result;
}

double exponential_series(int n, double x) {
    double sum = 1;
    for (int i = 1; i <= n; i++) {
        sum += power(x, i) / factorial(i);
    }
    return sum;
}

int main() {
    int n;
    double x;

    cout << "Enter the number of terms (N): ";
    cin >> n;
    cout << "Enter the value of x: ";
    cin >> x;

    double sum = exponential_series(n, x);
    cout << "The sum of the exponential series up to " << n << " terms is: " << sum << endl;

    return 0;
}