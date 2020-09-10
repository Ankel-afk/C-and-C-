/*
CH-230-A
a13 p2.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
 
 
 
 format for complex numbers is as followed:
 real + imaginaryi
 the i can be included or omitted.
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
    cout<<"printing read complex numbers . . .\n";
    cout<<s1<<endl;
    cout<<s2<<endl;
  
   ofstream dest;
    dest.open("output.txt");
    //operator prints to file
    cout << "printing what will be written to file . . .\n";
    cout<<s1+s2<<endl;
    dest << s1 + s2<<endl;
    cout<<s1 - s2<<endl;
    dest << s1 - s2<<endl;
    cout<<s1 * s2<<endl;
    dest << s1 * s2<<endl;
    dest.close();
//destructors close the files so that's nice







    return 0;
}
