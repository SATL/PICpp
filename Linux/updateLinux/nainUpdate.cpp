#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <fstream>

#include <string>

using namespace std;

void begin_screen();

int main(){
  if(getuid() != 0)
  {
    cout << "You must run as a root"<<endl;
  }else{
    system("apt-get update");
    system("apt-get upgrade");
    system("aptitude dist-upgrade");
  }
}
