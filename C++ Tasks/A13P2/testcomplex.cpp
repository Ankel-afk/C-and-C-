/*
CH-230-A
a10 p9.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include <iostream>
#include "Complex.h"
#include <fstream>
using namespace std;
int main(){
  ifstream src1("int1.txt");
  if(!src1.good()){cout<<"error opening File";
  exit(1);}

  ifstream src2("int2.txt");
  if(!src2.good()){cout<<"error opening File";
  exit(1);}

  Complex s1, s2, res;
  src1 >> s1;
  src2 >> s2;
   ofstream dest("output.txt");
   dest<< s1 + s2;
   dest<< s1 - s2;
   dest << s1 * s2;








    return 0;
}
