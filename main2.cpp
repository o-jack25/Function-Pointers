/*
#include <iostream>

//Added assert for termination if division by 0
#include <cassert>


using namespace std;

// Function prototypes for arithmetic operations
double add(double a, double b);
double subtract(double a, double b);

//Added function prototypes for multiplication and division
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    // Declare variables we will use
    double num1, num2; // Input variables
    double result; // Result returned by functions.

    // Array of function pointers
    //Take two double arguments and returns a double
    //Array with size of 4 because we have now have 4 arithmetic operations
    //Inline method to declare function pointers
    double (*operation[4])(double, double) = { add, subtract, multiply, divide };

    // Display menu
    cout << "Choose an operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    int choice;
    cin >> choice;

    // Check for valid choice
    if (choice < 1 || choice > 4) {
        cerr << "Invalid choice\n";
        return 1;
    }

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << endl;

    // Perform selected operation using function pointers
    //assign result to the given choice of arithmetic operation on array
    result = operation[choice - 1](num1, num2);

    // Display result
    cout << "Result is: " << result << endl;
    return 0;
}

// Function definitions for arithmetic operations
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

//Added function definitions for multiplication and division
double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    assert(b != 0); // Assertion to terminate if dividing by zero
    return a / b;
}*/