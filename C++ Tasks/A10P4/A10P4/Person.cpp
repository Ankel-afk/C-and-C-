/*
CH-230-A
a10 p4.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include "Person.h"
using namespace std;

void Person::setAge(int newage){
  age = newage;
}
void Person::setHeight(double newheight){
  height = newheight;
}
void Person::setName(string& newname ){
  name = newname;
}
void Person::setDepressed(bool newdepressed){
  depressed = newdepressed;
}

int Person::getAge(){
  return age;
}
double Person::getHeight(){
  return height;
}
string Person::getName(){
  return name;
}
bool Person::getDepressed(){
  return depressed;
}
