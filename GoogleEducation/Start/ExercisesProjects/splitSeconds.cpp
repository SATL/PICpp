#include <iostream>
using namespace std;


void SplitSeconds(int seconds){
	int hours, minutes;
	hours = seconds/3600;
	seconds = seconds%3600;
	minutes = seconds/60;
	seconds = seconds%60;
	cout<<"Hours: "<<hours<<endl;
	cout <<"Minutes: "<<minutes<<endl;
	cout <<"Seconds: "<<seconds<<endl;
}

int main(){
	int seconds;
	cout<<"Number of secods: ";
	cin>>seconds;
	SplitSeconds(seconds);

	return 0;
}