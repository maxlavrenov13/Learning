#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    cout << "First number: ";
    cin >> a;   
    cout << "Choose operation (+, -, *, /): ";
    cin >> op;
    cout << "Second number: ";
    cin >> b;
    if (op == '+') {
    cout << "Reasult: " << a + b << endl;
    } else if (op == '-') {
        cout << "Result: " << a - b << endl;
    } else if (op == '*') {
        cout << "Result: " << a * b << endl;
    } else if (op == '/') {
        if (b != 0) {
            cout << "Result: " << a / b << endl;
        } else {
            cout << "No no, you cant do this!" << endl;
        }
    } else {
        cout << "Unknown operation" << endl;
    }
     return 0;
}