/*
CH-230-A
a11 p6.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#include "Shapes.h"

#include <iostream>
using namespace std;

int main(int argc, char** argv) {

  Circle c("first circle", 3, 4, 7);

  RegularPolygon r("TRIANGLE", 1, 1, 3);

  Square s;
  Square squarino("this exercise is too long for 1 point", 0, 0, 69);
  Rectangle rectanglino("how is your day today?", 0, 1, 69, 420);
  Circle circlino("I'm good, thanks for asking!", 0, 0, 1/3.14159265359);


squarino.printName();
rectanglino.printName();
circlino.printName();


std::cout <<"getting areas: for circle "<< circlino.area()<< endl;
cout <<"getting areas: for square "<< squarino.area() << endl;
cout <<"getting areas: for rectangle "<< rectanglino.area() << endl;

cout<<" getting perimeters: for circle "<< circlino.perimeter()<<endl;
cout<<" getting perimeters: for square "<< squarino.perimeter()<<endl;
cout<<" getting perimeters: for rectangle "<< rectanglino.perimeter()<<endl;

//also to shown it can be done
Square sq(squarino);
Circle cir(circlino);
Rectangle rekt(rectanglino);

//empty constructors
Square on;
Rectangle my;
Circle ree;
return 0;
}
