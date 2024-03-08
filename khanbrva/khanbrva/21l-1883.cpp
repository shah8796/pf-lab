//#include <iostream>
//using namespace std;
//#include <cmath>
//
//using namespace std;
//
//void inputPolynomial(int*& exponents, int*& coefficients, int& numTerms) {
//    cout << "Enter the number of terms in the polynomial: ";
//    cin >> numTerms;
//
//    exponents = new int[numTerms];
//    coefficients = new int[numTerms];
//
//    for (int i = 0; i < numTerms; i++) {
//        cout << "Enter the exponent and coefficient for term " << i + 1 << ": ";
//        cin >> exponents[i] >> coefficients[i];
//    }
//
//    // sort the terms in decreasing order of exponent
//    for (int i = 0; i < numTerms; i++) {
//        for (int j = i + 1; j < numTerms; j++) {
//            if (exponents[j] > exponents[i]) {
//                int tempExp = exponents[i];
//                int tempCoeff = coefficients[i];
//                exponents[i] = exponents[j];
//                coefficients[i] = coefficients[j];
//                exponents[j] = tempExp;
//                coefficients[j] = tempCoeff;
//            }
//        }
//    }
//
//    // combine terms with the same exponent
//    for (int i = 0; i < numTerms; i++) {
//        for (int j = i + 1; j < numTerms; j++) {
//            if (exponents[i] == exponents[j]) {
//                coefficients[i] += coefficients[j];
//                // shift remaining terms to the left
//                for (int k = j; k < numTerms - 1; k++) {
//                    exponents[k] = exponents[k + 1];
//                    coefficients[k] = coefficients[k + 1];
//                }
//                numTerms--;
//                j--;
//            }
//        }
//    }
//}
//
//void outputPolynomial(int* exponents, int* coefficients, int numTerms) {
//    for (int i = 0; i < numTerms; i++) {
//        if (coefficients[i] == 0) {
//            continue;
//        }
//        if (i == 0) {
//            cout << coefficients[i];
//        }
//        else {
//            if (coefficients[i] > 0) {
//                cout << " + ";
//            }
//            else {
//                cout << " - ";
//            }
//            cout << abs(coefficients[i]);
//        }
//        if (exponents[i] > 0) {
//            cout << "x";
//            if (exponents[i] > 1) {
//                cout << "^" << exponents[i];
//            }
//        }
//    }
//    cout << endl;
//}
//
//// function to add two polynomials
//void add_poly(int* exp1, int* coeff1, int n1, int* exp2, int* coeff2, int n2, int*& exp3, int*& coeff3, int& n3) {
//    // allocate memory for result polynomial
//    exp3 = new int[n1 + n2];
//    coeff3 = new int[n1 + n2];
//    int i = 0, j = 0, k = 0;
//    while (i < n1 && j < n2) {
//        if (exp1[i] > exp2[j]) {
//            exp3[k] = exp1[i];
//            coeff3[k] = coeff1[i];
//            i++;
//        }
//        else if (exp1[i] < exp2[j]) {
//            exp3[k] = exp2[j];
//            coeff3[k] = coeff2[j];
//            j++;
//        }
//        else {
//            exp3[k] = exp1[i];
//            coeff3[k] = coeff1[i] + coeff2[j];
//            i++;
//            j++;
//        }
//        k++;
//    }
//    while (i < n1) {
//        exp3[k] = exp1[i];
//        coeff3[k] = coeff1[i];
//        i++;
//        k++;
//    }
//    while (j < n2) {
//        exp3[k] = exp2[j];
//        coeff3[k] = coeff2[j];
//        j++;
//        k++;
//    }
//    n3 = k;
//    outputPolynomial(exp3, coeff3, n3);
//}
//
//// function to multiply two polynomials
//void multiplyPolynomials(int n1, int* exp1, int* coef1,
//    int n2, int* exp2, int* coef2,
//    int& n3, int*& exp3, int*& coef3) {
//    // allocate memory for the result polynomial
//    n3 = n1 * n2;
//    exp3 = new int[n3];
//    coef3 = new int[n3];
//
//    // initialize result polynomial to zero
//    for (int i = 0; i < n3; i++) {
//        exp3[i] = 0;
//        coef3[i] = 0;
//    }
//
//    // multiply each term of polynomial 1 with each term of polynomial 2
//    for (int i = 0; i < n1; i++) {
//        for (int j = 0; j < n2; j++) {
//            int exp = exp1[i] + exp2[j];
//            double coef = coef1[i] * coef2[j];
//
//            // add the term to the result polynomial
//            int k;
//            for (k = 0; k < n3; k++) {
//                if (exp3[k] == exp) {
//                    coef3[k] += coef;
//                    break;
//                }
//            }
//            if (k == n3) {
//                exp3[k] = exp;
//                coef3[k] = coef;
//                n3++;
//            }
//        }
//    }
//
//    // remove any zero coefficients
//    int k = 0;
//    for (int i = 0; i < n3; i++) {
//        if (coef3[i] != 0) {
//            exp3[k] = exp3[i];
//            coef3[k] = coef3[i];
//            k++;
//        }
//    }
//    n3 = k;
//    outputPolynomial(exp3, coef3, n3);
//}
//int main()
//{
//    int* arr;
//    int* arr1;
//    int terms;
//
//    int* exp1;
//    int* coff1;
//    int terms2;
//
//    int* exp2;
//    int* coff2;
//    int terms3;
//   
//    inputPolynomial(arr, arr1, terms);
//    outputPolynomial(arr,arr1,terms);
//    cout << "polynomial 2:" << endl;
//    inputPolynomial(exp1, coff1, terms2);
//   /* cout << "polynomial 3:" << endl;
//    inputPolynomial(exp2, coff2, terms3);*/
//    cout << "POLYNOMIALS AFTER ADDING:" << endl;
//    add_poly(exp1, coff1, terms2, arr, arr1, terms, exp2, coff2, terms3);
//    cout << "POLYNOMIALS AFTER MULTIPLICATION:" << endl;
//    multiplyPolynomials(terms2,exp1,coff1,terms,arr,arr1,terms3,exp2,coff2);
//}