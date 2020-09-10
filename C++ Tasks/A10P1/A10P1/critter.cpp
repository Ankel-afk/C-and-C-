/*
CH-230-A
a10 p7.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"
/*
    std::string name;
    int hunger;
    int boredom;
    double height;
    std::string species;
    std::string spoiler;*/
//using namespace std;
Critter::Critter(){
  std::cout<<"default constructor called \n";
  name = "default_critter";
  height = 5;
  boredom = 0;
  species = "";
  spoiler = "";
  hunger = 0;

}
Critter::Critter(std::string& n){
  std::cout<<"name constructor called \n";
  name = n;
  height = 5;
  boredom = 0;
  species = "";
  spoiler = "";
  hunger  = 0;
  thirst = hunger;
}
Critter::Critter(std::string& n, int hun, int b, double h){
  std::cout<<"full constructor called \n";
  name = n;
  //hunger is divided by10 to store as double
  hunger = (double) hun/10;
  boredom = b;
  height = h;
  thirst = hunger;
}

Critter::Critter(std::string& n, int hun, int b, double h, int t){
  name = n;
  hunger = (double) hun / 10;
  boredom = b;
  height = h;
  thirst = (double) t/10;

}

void Critter::setSpoiler(std::string& newspoiler){
  spoiler = newspoiler;
}

void Critter::setSpecies(std::string& newspecies){
  species = newspecies;
}
std::string Critter::getSpoiler(){
  return spoiler;
}

std::string Critter::getSpecies(){
  return species;
}

void Critter::setHunger(int newhunger) {
    hunger = (double) newhunger/10;
}

void Critter::print() {
    std::cout << "I am " << name << ". My hunger level is " <<  (int) (hunger * 10) << ",";
    std::cout<<" my height is " << height <<", my thirst is "<< (int)(thirst * 10);
    std::cout<<", my boredom is: "<<boredom<<"\n";
    //hunger is multiplied by 10 to print it out as an int
}

int Critter::getHunger() {
    return hunger*10;
}
