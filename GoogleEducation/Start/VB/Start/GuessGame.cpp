#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "GuessGame.h"

using namespace std;

GuessGame::GuessGame() {
	cout << "Game is created";
}

void GuessGame::startGame() {
	int secret, guess;

	srand(time(NULL));
	secret = rand() % 100 + 1;

	do {
		cout << "Introduce a number to guess " << endl;
		if (!(cin >> guess)) {
			cout << "That is not a number, try again" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		else {
			if (guess > secret)
				cout << "The secret number is lower than " << guess << endl;
			else if (guess < secret)
				cout << "The secret number is higher that " << guess << endl;
			else {
				cout << "That's correct, ";
			}
		}


	} while (secret != guess);

	cout << "Congratulations!"<< endl;

}