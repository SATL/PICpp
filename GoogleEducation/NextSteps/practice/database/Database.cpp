#include "Database.h"
#include <iostream>

using namespace std;
Database::Database(){
	next_slot_=0;
}
Database::~Database(){}

Composer& Database::AddComposer(string in_first_name, string in_last_name, string in_genre, int in_yob, string in_fact){

	Composer composer;
	composer.set_first_name(in_first_name);
	composer.set_last_name(in_last_name);
	composer.set_composer_yob(in_yob);
	composer.set_composer_genre(in_genre);
	composer.set_fact(in_fact);
	composers_[next_slot_]=composer;
	next_slot_++;
	return composer;
}

Composer& Database::GetComposer(string in_last_name){
	for(int i=0; i< next_slot_; i++){
		Composer &composer = composers_[i];
		if(composer.last_name() == in_last_name)
			return composer;
	}
}

void Database::DisplayAll(){
	for(int i=0; i< next_slot_; i++){
		Composer &composer = composers_[i];
		composer.Display();
	}
}
void Database::DisplayByRank(){

}
