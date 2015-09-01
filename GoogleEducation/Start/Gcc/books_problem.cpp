//books_problem.cpp. Eslem Alzate
//Description: Calculate ways to arrage 6 different books left to right on a shelf

#include <iostream>
using namespace std;

int main(){
	int total = 0;

	for(int i=0; i<6; i++)
		for(int j=0; j<5; j++)
			for(int k=0; k<4; k++)
				for(int l=0; l<3; l++)
					for(int m=0; m<2; m++)
						total++;
	cout <<"Total result "<<total;
	return 0;
}
