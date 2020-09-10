/*
CH-230-A
a10 p7.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;
//Critter(std::string& n, int hun, int b, double h)
int main(int argc, char** argv)
{
  string nameb = "Carlos";
  string namec = "Johnathan Joestar";
  string named = "Dio Brando";
string namee = "Johnny Joestar";

  Critter a;
  Critter b(nameb);
    //will have 100 height
  Critter c(namec, 2, 16, 100);
    //will have default height
  Critter d(named, 2, 16);
    //a and b will not have thirst values when we set hunger
  a.setHunger(2);
  b.setHunger(2);
  //new constructor is called
  Critter e(namee, 3, 6, 6, 7);

//prints the objects.
  a.print();
  b.print();
  c.print();
  d.print();
  e.print();








  /*
    Critter c;

    std::string name;
    int hunger;
    std::string species;
    std::string spoiler;
    std::string trash;

    std::cout<<std::endl << "Please enter data: " << std::endl;
    std::cout << "Name: ";
    // cin >> name; will not work if name contains
    // spaces
    getline(std::cin, name);
    c.setName(name);
    c.setName(name);
    std::cout << "Hunger: ";
    std::cin >> hunger;
    c.setHunger(hunger);
    std::cin.ignore();
    std::cout<<"Species: ";
    std::getline(std::cin, species);

    std::cout << "Enter a spoiler like: Han Solo dies in TFA";
    std::cin.ignore();
    std::getline(std::cin, spoiler);

    c.setSpecies(species);
    c.setSpoiler(spoiler);


    std::cout << "You have created:" << std::endl;
    c.print();*/
        return 0;
}
