#include <algorithm>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

#define REQ_PRC 90
#define USED_PRC 65
#define OPT_REQ_PRC 40
#define OPT_USED_PRC 20
double totalCost =0;
double booksAdded =0;

bool StrToBool(istream& in){
	string str;
	in >>str;
	std::transform(str.begin(), str.end(),str.begin(), ::toupper);
	if (str == "Y" || str == "YES")
		return true;
	else if(str == "N" || str == "NO")
		return false;
	else{
		cout << "Option not valid, please introduce Y or N: ";
		return StrToBool(cin);
	}
}

int getPercentageToApply( bool isReq, bool isNew){
	if(isReq){
		if(isNew)
			return REQ_PRC;
		else
			return USED_PRC;
	}else{
		if(isNew)
			return OPT_REQ_PRC;
		else
			return OPT_USED_PRC;
	}
}

void showCosts(double price, int needed){
	double cost;
	cout<<endl;
	if(needed>0){
		cost = needed*price;
		totalCost+=cost;
		cout<<"Need to order:"<<needed<<endl;
		cout<<"Cost: "<<cost;
	}
	else
		cout <<"No need to buy more books";

	if(booksAdded>1){
		cout<<"Total books added: "<<booksAdded<<endl;
		cout<<"Total cost: "<<totalCost<<endl;
	}
}

void calculate(string book, double price, int num, int enroll, bool isReq, bool isNew){
	int toOrder;
	booksAdded++;

	cout <<endl<<"**********************************************";
	cout <<endl<<"Book: "<<book;
	cout <<endl<<"Price: "<<price;
	cout <<endl<<"Inventory: "<<num;
	cout <<endl<<"Enrollment: "<<enroll;

	cout <<endl<<endl<<"This book is";
	if(!isReq)
		cout<<" not ";
	cout << " required and ";

	if(isNew)
		cout << "not ";
	cout <<"used"<<endl;
	cout <<endl<<"**********************************************"<<endl;

	toOrder = round(enroll * getPercentageToApply(isReq, isNew)/100);
	toOrder = toOrder-num;
	showCosts(price, toOrder);

}

void addBook(){
	string code;
	double price;
	int num, enroll;
	bool isReq, isNew;
	
	cout << "Please enter the book code: ";
	cin >> code;
	cout <<" single copy price:";
	cin >> price;
	cout<<" number on hand:";
	cin >> num;
	cout<<" prospective enrollment:";
	cin >> enroll;
	
	cout<<" is required? (Y/N):";
	isReq = StrToBool(cin);
	cout<<" is new? (Y/N):";
	isNew = StrToBool(cin);
	calculate(code, price, num, enroll, isReq, isNew);
}


int main(){
	string close;
	while(close!="n"){
		addBook();
		cout<<endl<<"Do you want to add another book? (n for no)";
		cin>>close;
	}
}