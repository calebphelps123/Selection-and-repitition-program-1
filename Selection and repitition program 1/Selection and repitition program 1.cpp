#include <iostream>

using namespace std;
int main()
{
    int numerator, denominator;
    char operation;

    cout << "Enter your calculation: ";
    cin >> numerator >> operation >> denominator;

    switch (operation) {
    case 'x':
    case '*':
        cout << numerator * denominator << endl;
        break;
    case '+':
        cout << numerator + denominator << endl;
        break;
    case '-':
        cout << numerator - denominator << endl;
        break;
    case '/':
    case '%':
        if (numerator == 0 || denominator == 0) {
            cout << "Cannot divide by zero" << endl;
            return 1;
        }
        cout << numerator / denominator << endl;
        break;
    default:
        cout << "There was an error with your input" << endl;
        return 1;
        break;
    }

    return 0;
}






























































































































