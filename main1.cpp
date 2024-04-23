#include <iostream>
using namespace std;

// Function prototypes for arithmetic operations
double add(double a, double b);
double multiply(double a, double b);

//Function definition to add two numbers
double add(double a, double b) {
	return a + b;
}

//Function definiton to multiply two numbers
double multiply(double a, double b) {
	return a * b;
}

int main() {
    // Declare variables we will use
    double num1, num2; // Input variables
    double result; // Result returned by functions.

    // Declare a function pointer to each of the operations
    //Take two double arguments and returns a double
    //Perform pointer addition and pointer multiplication
    double (*addPtr)(double, double) = add;
    double (*multiplyPtr)(double, double) = multiply;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << endl;

    // Use function pointer to add the two
    //result == addPtr(num1, num2);
    result = addPtr(num1, num2);
    //print out addition statements and result
    cout << "The sum of " << num1 << " and " << num2 << " is " << result << endl;

    // Use function pointer to multiply the two
    //result == multiplyPtr(num1, num2);
    //print out multiplication statements and result
    result = multiplyPtr(num1, num2);
    cout << "The product of " << num1 << " and " << num2 << " is " << result << endl;

    return 0;
}