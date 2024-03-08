#include <iostream>

using namespace std;

// Function to calculate GPA
double CalculateGPA(int course1_grade, int course1_credit_hours,
    int course2_grade, int course2_credit_hours,
    int course3_grade, int course3_credit_hours,
    int course4_grade, int course4_credit_hours,
    int course5_grade, int course5_credit_hours) {
    // Calculate total credit hours and grade weight
    int total_credit_hours = course1_credit_hours + course2_credit_hours +
        course3_credit_hours + course4_credit_hours +
        course5_credit_hours;
    double grade_weight = (course1_grade + course2_grade + course3_grade +
        course4_grade + course5_grade) / 5.0;

    // Calculate GPA using the formula
    double gpa = (grade_weight * total_credit_hours) / total_credit_hours;

    return gpa;
}

int main() {
    // Get grades and credit hours for five courses
    int course1_grade, course1_credit_hours;
    int course2_grade, course2_credit_hours;
    int course3_grade, course3_credit_hours;
    int course4_grade, course4_credit_hours;
    int course5_grade, course5_credit_hours;

    cout << "Enter grade and credit hours for course 1 (A=4, A-=3.67, B=3, B-=2.67, C=2, D=1, F=0): ";
    cin >> course1_grade >> course1_credit_hours;

    cout << "Enter grade and credit hours for course 2 (A=4, A-=3.67, B=3, B-=2.67, C=2, D=1, F=0): ";
    cin >> course2_grade >> course2_credit_hours;

    cout << "Enter grade and credit hours for course 3 (A=4, A-=3.67, B=3, B-=2.67, C=2, D=1, F=0): ";
    cin >> course3_grade >> course3_credit_hours;

    cout << "Enter grade and credit hours for course 4 (A=4, A-=3.67, B=3, B-=2.67, C=2, D=1, F=0): ";
    cin >> course4_grade >> course4_credit_hours;

    cout << "Enter grade and credit hours for course 5 (A=4, A-=3.67, B=3, B-=2.67, C=2, D=1, F=0): ";
    cin >> course5_grade >> course5_credit_hours;

    // Calculate GPA using the CalculateGPA() function
    double gpa = CalculateGPA(course1_grade, course1_credit_hours,
        course2_grade, course2_credit_hours,
        course3_grade, course3_credit_hours,
        course4_grade, course4_credit_hours,
        course5_grade, course5_credit_hours);

    // Print the GPA
    cout << "Your GPA is: " << gpa << endl;

    return 0;
}
