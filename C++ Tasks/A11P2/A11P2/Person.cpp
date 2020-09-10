
/*
CH-230-A
a11 p2.[c or cpp or h]
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
Person::Person(){
    name = "more basic than bleach person";
    age = 26; //taken from global statistics
    height = 1.71; // taken from global statistics
    depressed = false;
}
Person::Person(const string n, const int a, const double h, const bool d){

    name = n;
    age = a;
    height =h;
    depressed = d;

}
Person::Person(const Person& src){
  name = src.name;
  age = src.age;
  height = src.height;
  depressed = src.depressed;
}
void Person::print(){
    cout<<"name: "<<name<<"\nage: "<<age<<endl<<"height: "<<height<<endl;
    cout<<"depressed: "<<(depressed == true? "yes" : "no" )<<endl;

}
