#include <iostream>
using namespace std;

int main() {
    
    double number1, number2, result;
    char op;

    
    cout << "===== SIMPLE CALCULATOR =====\n";
    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> number2;

    
    switch (op) {
        case '+':
            result = number1 + number2;
            cout << "\nResult: " << number1 << " + " << number2 << " = " << result << endl;
            break;

        case '-':
            result = number1 - number2;
            cout << "\nResult: " << number1 << " - " << number2 << " = " << result << endl;
            break;

        case '*':
            result = number1 * number2;
            cout << "\nResult: " << number1 << " * " << number2 << " = " << result << endl;
            break;

        case '/':
            
            if (number2 == 0) {
                cout << "\nError: Division by zero is not allowed!" << endl;
            } else {
                result = number1 / number2;
                cout << "\nResult: " << number1 << " / " << number2 << " = " << result << endl;
            }
            break;

        default:
            cout << "\nError: Invalid operator!" << endl;
    }

    return 0;
}