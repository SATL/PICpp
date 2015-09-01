// hello.cpp: Eslem Alzate
// Description: a program that prints the immortal saying "hello world"

#include <iostream>
#include <iomanip>
using namespace std;
using std::setw;

int main_hello() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {
			cout << setw(17) << "Hello World!" << endl;
		}
	}
	return 0;
}