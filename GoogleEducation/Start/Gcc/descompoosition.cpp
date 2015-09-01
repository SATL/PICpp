//descompositions.cpp. Eslem Alzate
//Description: Problem to calculate the best salary for 3 different options

#include <iostream>
using namespace std;

#define kPricePerUnit 225
#define kM1WeeeklyWage 600
#define kM2SalaryPerHour 7
#define kM2HoursPerWeek 40
#define kM2Commission 0.10
#define kM3Commission 0.20
#define kM3BonusPerUnit 20


int GetInput(){
	int units;

	cout <<"Enter the number of units sold per week: ";
	if(!(cin>>units)){
		cout <<"Enter number only"<<endl;
		return GetInput();
	}else{
		return units;
	}
}

int CalcMeth1(){
	return kM1WeeeklyWage;
}

double CalcMeth2(int Sales){
	return (kM2HoursPerWeek*kM2SalaryPerHour)+(Sales*kPricePerUnit*kM2Commission);
}

double CalcMeth3(int Sales){
	return (Sales*kM3BonusPerUnit) + (Sales*kPricePerUnit*kM3Commission);
}

int main(){
	int WeeklySales;

	WeeklySales = GetInput();
	cout << "Method 1: "<<CalcMeth1()<<endl;
	cout << "Method 2: "<<CalcMeth2(WeeklySales)<<endl;
	cout << "Method 3: "<<CalcMeth3(WeeklySales)<<endl;
	return 0;
}

