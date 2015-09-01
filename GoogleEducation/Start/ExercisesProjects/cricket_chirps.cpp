//cricket_chirps.cpp, Eslem Alzate
//desciption: Calculate the temperature base on the file cricket chirps

#include <iostream>
using namespace std;

#define kAdding 40
#define kDivisionValue 4;

double GetTemperatureFromChirps(int chirps){
	return (chirps+40)/4;
}

int main(){
	int times;
	cout <<"Introduce the number of time a cricket chirps in a minute: "; cin >>times;
	cout<< endl<< "The temperature is: "<<GetTemperatureFromChirps(times);
	return 0;
}