#include <iostream>

using namespace std;

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);

int main() {
    char choice;
    int a, b;
    do {
        cout << "Select a operation:\n"
                  << "1-Addition\n"
                  << "2-Substraction\n"
                  << "3-Multiplication\n"
                  << "4-Division\n"
                  << "Enter your choice (1 or 2 or 3 or 4): ";
        cin >> choice;

        cout << "Enter in two integer values:\n";
        cin >> a >> b;

        switch(choice) {
            case '1':
                cout << "Result: " << add(a, b) << endl;
                break;
            case '2':
                cout << "Result: " << subtract(a, b) << endl;
                break;
            case '3':
                cout << "Result: " << multiply(a, b) << endl;
                break;
            case '4':
                if(b == 0) {
                    cout << "The second integer is zero, divide by zero." << endl;
                } else {
                    cout << "Results: " << divide(a, b) << endl;
                }
                break;
            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "Press y or Y to continue: ";
        cin >> choice;
    } while(choice == 'y' || choice == 'Y');

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    return static_cast<double>(a) / b;
}