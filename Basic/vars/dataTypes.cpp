#include <iostream>
using namespace std;

int main(){
  cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

   // Typedef
   typedef int numero;
   numero num = 4;
   cout << "New typeDef 'numero':"<<num<<endl;

   //Enums

   enum colors {red, blue, green} color;
   color = blue;
   cout<< "Enums : "<<color;

  return 0;
}
