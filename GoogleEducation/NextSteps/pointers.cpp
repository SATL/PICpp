// artillery.cpp: Eslem Alzate
// Description: Examples with pointers
#include <iostream>

using namespace std;

void addSeparation(){
	cout<<endl<<"-------------------------------------------------------------"<<endl;
}

void DuplicateByPointer(int& a, int b){
	cout << "Value to duplicate: "<<a<<" pointer: "<<&a <<endl;
	a*=2;
	b*=2;
}

int main(){
	int *ptr;
	ptr = new int;
	*ptr = 5; 

	cout <<"Ptr: "<<ptr<<" value:"<<*ptr<<endl;
	*ptr = *ptr + 1;
	cout <<"Ptr: "<<ptr<<" value:"<<*ptr<<endl;

	addSeparation();///-------------------------
	int* x;
	int* y;
	x = new int;
	*x = 42;
		// *y = 13;
	y=x;
	*y = 13;
	cout <<*x<< " pointer x:"<< x <<" pointer y: "<<y<< " y value: "<<*y<<endl;

	addSeparation();///-------------------------

	int my_int = 46;
	int *my_pntr = &my_int;

	*my_pntr = 99;
	cout << my_int <<" pointer: "<<my_pntr<< "pointer value: "<<*my_pntr<<endl;

	addSeparation();///-------------------------

	int *ptr1;
	ptr1 = new int;

	float *ptr2 = new float;
	delete ptr1;
	delete ptr2;

	addSeparation();///-------------------------
	int toDup = 5, noPoint = 2;
	cout << "Value :"<<toDup<<", "<<noPoint<<endl;
	DuplicateByPointer(toDup, noPoint);
	cout << "Value :"<<toDup<<", "<<noPoint<<endl;

	return 0;
}