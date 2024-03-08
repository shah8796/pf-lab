#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Make sure the number of columns does not exceed the total number of alphabets
    cols = min(cols, 26);

    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i % 2 == 1) {
                cout << (char)('a' + j);
            }
            else {
                cout << j + 1;
            }
        }
        cout << endl;
    }

    return 0;
}