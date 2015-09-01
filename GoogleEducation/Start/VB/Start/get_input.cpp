// get_input.cpp: Eslem Alzate
// Description: Illustrate the use of cin to get input.

#include <iostream>
using namespace std;

int main_input() {
	int input_var = 0;
	do {
		cout << "Enter a number (-1 = quit): ";
		if (!(cin >> input_var)) {
			cout << "You entered a non-numeric." << endl;
			cin.clear();
			cin.ignore(100, '\n');
			//break;
		}
		if (input_var != -1) {
			cout << "You entered " << input_var << endl;
		}
	} while (input_var != -1);
	cout << "All done." << endl;
	return 0;
}