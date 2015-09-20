// accelerate_pointers.cpp: Eslem Alzate
// Description: A simple practice for functions with values by references

#include <iostream>

using namespace std;

void accelerate(int &speed, int ammount);

int main(){
	int ammount, speed;

	ammount = 50;
	speed = 80;
	cout <<"The initial speed is: "<<speed<<endl;
	accelerate(speed, ammount);
	cout <<"The speed now is: "<<speed<<endl;
	return 0;
}

void accelerate(int &speed, int ammount){
	//C++ is great for this: & is the reference and you don't have to parse it:
	// int *pointer_speed = &speed;
	// *pointer_speed = *pointer_speed+ammount;
	speed+=ammount;
}