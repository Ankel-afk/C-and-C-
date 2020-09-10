/*
CH-230-A
a10 p3.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
using namespace std;
#include <iostream>
#include "City.h"


void City::setName(string& newname){
    name = newname;

}
void City::setInhabitants(long int& newinhabitants){
    inhabitants = newinhabitants;
}
void City::setMayor(string& newmayor){
    mayor = newmayor;

}
void City::setArea(long double& newarea){
    area = newarea;

}


string City::getName(){
    return name;
}
long int City::getInhabitants(){
    return inhabitants;
}
string City::getMayor(){
    return name;
}
long double City::getArea(){
    return area;
}
void City::print(){
    cout<<"name: "<<name<<"\n population: "<<inhabitants<<"\n mayor: "<<mayor<<endl;
    cout<<"area: "<<area<<endl;
    
}
