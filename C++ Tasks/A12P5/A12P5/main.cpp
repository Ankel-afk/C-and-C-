/*
CH-230-A
a12 p5.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
int die;
int count = 0;
int randomNumber;
    std::string colors[4];
    colors[0] = "RED";
    colors[1] = "BLACK"; colors[2] = "VIOLET"; colors[3] = "BLUE";
// init random number generator
srand(static_cast<unsigned int>(time(0)));
    //print out 15 colors
while (count < 15) {
randomNumber = rand();
die = (randomNumber % 4) ;
cout << "color chosen is: "<< colors[die]<< endl;
count++;
}
return 0;
}
