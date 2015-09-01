// artillery.cpp: Eslem Alzate
// Description: A simple game with a little physics
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

const int kNumShells = 10;  
const int kMinDist = 200;  
const int kMaxDist = 900;  
const double kVelocity = 200.0;  
const double kGravity = 32.2;  
const double kPi = 3.1415;

int DistanceCalc (double in_angle) {
  double time_in_air;
  time_in_air = (2.0 * kVelocity * sin(in_angle)) / kGravity;
  return (int) round((kVelocity * cos(in_angle)) * time_in_air);
}

int CheckShot() {

  int distance;
  double angle;
  cout << "What angle? " << endl;
  if (!(cin >> angle))
    return -1;

  angle = (angle * kPi) / 180.0;
  distance =  DistanceCalc(angle);
  return distance;
}

int Initialize() {
  int enemy_position;

  srand (time(NULL));

  enemy_position = rand() % kMaxDist + kMinDist;
  cout << "The enemy is " << enemy_position << " feet away!!!" << endl;
  return enemy_position;
}

int Fire(int number_killed) {

  int enemy, shots, hit;
  int distance;

  shots = kNumShells;
  enemy = Initialize();
  distance = 0;
  hit = 0;

  do {
    distance = CheckShot();
    if (distance == -1) {
      cout << "Enter numbers only..." << endl;
      cin.clear();
      cin.ignore(10000,'\n');
      continue;
    }
    if (abs(enemy - distance) <= 1) {
      hit = 1;
      number_killed++;
      cout << "You hit him!!!" << endl;
      cout << "It took you " << kNumShells - shots + 1 <<  " shots." << endl;
      cout << "You have killed " <<  number_killed << " enemies." << endl;
    } else {
      shots--;
      if (distance > enemy) {
        cout << "You over shot by " << abs(enemy - distance) << endl;
      } else {
        cout << "You under shot by " << abs(enemy - distance) << endl;
      }
    }
  } while ((shots > 0) && (!(hit)));
  if (shots == 0)
    cout << "You have run out of ammo..." << endl;
  return number_killed;
}

void StartUp() {
  cout <<  "Welcome to Artillery.";
  cout <<  "You are in the middle of a war and being charged by thousands of enemies.";
  cout <<  "You have one cannon, which you can shoot at any angle.";
  cout <<  "You only have 10 cannonballs for this target..";
  cout <<  "Let's begin...";
  Initialize();
}


int main(){
  StartUp();
  int killed = 0;
  string done;
  do {
    killed = Fire(killed);
    cout << "I see another one, care to shoot again? (Y/N) " << endl;
    cin >> done;
  } while (done != "n");
  cout << "You killed " << killed << " of the enemy." << endl;

  return 0;
}