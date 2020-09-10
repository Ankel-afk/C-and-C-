/*
CH-230-A
a10 p3.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#ifndef City_h
#define City_h

using namespace std;
#include <iostream>
class City{
private:
    string name;
    long int inhabitants;
    string mayor;
    long double area;
public:
    void setName(string& name);
    void setInhabitants(long int& inhabitants);
    void setMayor(string& mayor);
    void setArea(long double& area);
    string getName();
    long int getInhabitants();
    string getMayor();
    long double getArea();
    void print();
};

#endif /* City_h */
