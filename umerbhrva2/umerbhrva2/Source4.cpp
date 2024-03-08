#include <iostream>

using namespace std;

void reverse_num(int& num);
void combine_num(int& num);

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    combine_num(num);
    cout << "Combined number: " << num << endl;
    return 0;
}

void reverse_num(int& num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    num = rev;
}

void combine_num(int& num) {
    int temp = num;
    reverse_num(num);
    while (temp > 0) {
        num *= 10;
        num += temp % 10;
        temp /= 10;
    }
}
