#include <iostream>
#include <stdlib.h>
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
static const std::string slash="\\";
static const std::string end=".exe";
#else
static const std::string slash="/";
static const std::string end="";
#endif
using namespace std;

int main(int argc, char* argv[]) {
 char* file;
 if(argc==1){
   cout << "put some file to run";
 }else{
   file = argv[1];
   string str(file);
   system(("g++ "+str+"  -o .outputRun").c_str());
   system(("."+slash+".outputRun").c_str());
 }

 return 0;
}
