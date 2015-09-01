//files.cpp, Eslem Alzate
//Description: example of file processing

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	char first_name[30], last_name[30]; int age;
	char first_nameI[30], last_nameI[30]; int ageI;
	char file_name[20];

	cout << "Enter first name: "; cin>> first_name;
	cout << "Enter last name: "; cin>> last_name;
	cout << "Enter age: "; cin>> age;
	cout << endl<<"Enter file name: "; cin>> file_name;

	ofstream People(file_name, ios::out);
	People<< first_name <<endl<<last_name<<endl<<age<<endl;
	People.close();

	ifstream Input(file_name);
	string IntStr ((istreambuf_iterator<char>(Input)), istreambuf_iterator<char>());
	Input.close();	
	cout << endl<<"File content:"<<endl<<IntStr;

	ifstream People_in(file_name);
	People_in >> first_nameI >> last_nameI >> ageI;

	cout << endl << "First Name: " << first_nameI; 
	cout << endl << "Last Name:  " << last_nameI;
	cout << endl << "Enter Age:  " << ageI;
	cout << endl;

  // Close the stream.
	People_in.close();
	return 0;
}
