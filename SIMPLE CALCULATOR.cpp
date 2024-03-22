#include<iostream>
using namespace std;
int main() {
    float a, b;
    char op;
    cout << "    ENTER FIRST NUMBER = "; cin >> a; cout << endl;
    cout << "    ENTER SECOND NUMBER = "; cin >> b; cout << endl;
    cout << " ========================================" << endl;
    cout << "         --------MENU--------" << endl;
    cout << "           DIVISION(/)" << endl;
    cout << "           MULTIPLICATION(*)" << endl;
    cout << "           ADDITION(+)" << endl;
    cout << "           SUBTRACTION(-)" << endl;
    cout << " ========================================" << endl;
    cout << "    ENTER OPERATOR = "; cin >> op; cout << endl;
    switch (op) {
    case'/':
        cout <<  a << " / " <<  b << " = " << a / b;
        break;
    case'*':
        cout << a << " * " << b << " = " <<  a * b;
        break;
    case'+':
        cout << a << " + " << b << " = " << a + b;
        break;
    case'-':
        cout << a << " - " << b << " = " << a - b;
        break;
    default:
        cout << "  wrong operator is entered " << endl;
    }
    return 0;
}