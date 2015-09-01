#include <iostream>

using namespace std;
#define kAssigPercentage 0.4;
#define kMidPercentage 0.15;
#define kFinalPercentage 0.35;
#define kSectionPercentage 0.1;

double Average(int arr[], int length){
	int foo =0;
	for(int i=0; i<length; i++){
		foo+=arr[i];
	}
	return foo/length;
}

double CalculataTotal(int avg, int mid, int finalExam, int participation){
	int total=0;
	total+=avg*kAssigPercentage;
	total+=mid*kMidPercentage;
	total+=finalExam*kFinalPercentage;
	total+=participation*kSectionPercentage;
	return total;
}

int AskValue(string toAsk){
	int value;
	cout <<toAsk<<endl;
	if(!(cin>>value)){
		cout <<"Enter number only"<<endl;
		return 0;
	}else{
		return value;
	}
}

int main(){
	int firstAssig, secondAssig, thirdAssig, fourthAssig, mid, final, section;
	cout<<"Enter the score for the first assigment:";
	cin>>firstAssig;
	cout<<"Enter the score for the second assigment:";
	cin>>secondAssig;
	cout<<"Enter the score for the third assigment:";
	cin>>thirdAssig;
	cout<<"Enter the score for the fourth assigment:";
	cin>>fourthAssig;
	cout<<"Enter the score for the midterm:";
	cin>>mid;
	cout<<"Enter the score for the final:";
	cin>>final;
	cout<<"Enter the score for the section grade:";
	cin>>section;
	int arr[] = {firstAssig, secondAssig, thirdAssig, fourthAssig};
	double avg = Average(arr, 4);
	double total = CalculataTotal(avg, mid, final, section);
	cout << "The final grade is: "<<total;
	return 0;
}