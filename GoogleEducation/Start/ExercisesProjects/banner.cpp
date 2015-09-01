#include <iostream>
using namespace std;

void printK(){
	cout<<"K   K"<<endl;
	cout<<"K  K"<<endl;
	cout<<"KK"<<endl;
	cout<<"K  K"<<endl;
	cout<<"K    K"<<endl<<endl;
}

void printI(){
	cout<<"IIIII"<<endl;
	cout<<"  I"<<endl;
	cout<<"  I"<<endl;
	cout<<"  I"<<endl;
	cout<<"IIIII"<<endl<<endl;
}

void printC(){
	cout<<"IIIII"<<endl;
	cout<<"I"<<endl;
	cout<<"I"<<endl;
	cout<<"I"<<endl;
	cout<<"IIIII"<<endl<<endl;
}


int main(){
	printK();
	printI();
	printC();
	printK();
	return 0;
}