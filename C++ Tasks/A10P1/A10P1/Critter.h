/*
CH-230-A
a10 p7.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include <string> // defines standard C++ string class

/* First C++ class */
class Critter{
private:  // data members are private
    std::string name;
    double hunger;
    double thirst;
    int boredom;
    double height;

    std::string species;
    std::string spoiler;

public: // business logic methods are public
    // setter methods
    Critter();
    Critter(std::string& n);
    Critter(std::string& n, int hun, int b, double h=10); // name, hunger, boredom and height
    Critter(std::string& n, int hun, int b, double h, int t);

    void setName(std::string& newname) {
        name = newname;
    }

    std::string getSpoiler();
    std::string getSpecies();
    void setSpoiler(std::string& newspoiler);
    void setSpecies(std::string& newspecies);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    // getter method
    int getHunger();
    // service method
    void print();
};
