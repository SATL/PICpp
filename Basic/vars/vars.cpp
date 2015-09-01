#include <iostream>
using namespace std;

// Variable declaration:
extern int a, b;
extern int c;
extern float f;

// function declaration
//int func();
// function definition
int func()
{
    return 4;
}

//literals
int dec  = 85 ; // decimal
int oct  = 0213 ; // octal
int hex  = 0x4b ; // hexadecimal
int Int  = 30 ; // int
int uInt = 30u ; // unsigned int
int lng  = 30l ; // long
int uLng = 30ul ; // unsigned long

//Global variables
int global = 100;

//Contstand
#define NEWLINE '\n'
#define X 10;

const int Y =3;
int main ()
{
  // Variable definition:
  int a, b;
  int c;
  float f;

  // actual initialization
  a = 10;
  b = 20;
  c = a + b;

  cout << c << endl ;

  f = 70.0/3.0;
  cout << f << endl ;

  // function call
  int i = func();
  cout << i <<endl;

  cout <<global <<endl;

  global = 10;
  cout <<global <<endl;

  cout <<"New line constant "<<NEWLINE;
  cout <<"X constant "<<X<<endl;
  cout <<"Y constant "<<Y<<endl;

  cout <<"Trying to change constant..."<<endl;
  Y = 5;

  return 0;
}
