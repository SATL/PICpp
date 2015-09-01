#include <iostream>
#include <math.h>

using namespace std;

bool isSquare(int n){
	if(n<0)
		return false;
	int rt = round(sqrt(n));
	return n == (rt*rt);
}

bool isSumN(int n){
	int sum =0;
	for(int i=0; i<n; i++){
		sum+=i;
		if(sum ==n)
			return true;
		if(sum >n)
			return false;
	}
	return false;
}

int main(){
	cout <<"Searching..."<<endl;
	for(int i=0; i<9999999; i++){
		if(isSumN(i) && isSquare(i))
			cout<<"Number "<<i<<" is an square number and the sum of 1..n"<<endl;
	}
	cout <<"Search finished";

	return 0;
}