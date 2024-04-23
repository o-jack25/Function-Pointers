/*
#include <iostream>
using namespace std;


// Function prototypes
string f1(void);
string f2(void);
string f3(void);



int main() {
	int selection;
	string retValue;


	// Array of function pointers
	string(*funPtrs[4])() = { f1, f2, f3 };
	cout << "Enter selection(0-3) or -1 to exit: ";
	cin >> selection;


	// Loop while selection is not 0
	while (selection != -1) {
		// Call the function that was selected and print result
		retValue = funPtrs[selection]();
		cout << retValue << endl;
		// Get the next selection
		cout << "Enter selection(0-3) or -1 to exit: ";
		cin >> selection;
	}
	return 0;
}

// Function definitions
string f1() { return "Let's Go Blue!"; }
string f2() { return "Hail to the Victors!"; }
string f3() { return "Wolverines Rock!"; }

*/