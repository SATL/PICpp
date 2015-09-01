#include <iostream>

#include "GuessGame.h"
#include "Euclidean.h"
using namespace std;

void makeEuclidean(int a, int b) {
	Euclidean euclidean;
	cout << "The gdc is " << euclidean.gdc(a, b) <<endl;
}

void guessGame() {
	GuessGame game;
	game.startGame();
}


int main() {
	cout << " Init main" << endl;
	makeEuclidean(12, 6);
	return 0;
}

