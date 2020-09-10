/*
CH-230-A
a10 p3.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
using namespace std;
#include <iostream>
#include "City.h"
int main(int argc, const char * argv[]) {
    // insert code here...
    City* cities = new City[3];
    string name;
    long int pop;
    string mname;
    long double area;
    for (int i = 0; i < 3; i++){
        cout<<"enter name for city"<<endl;
        cin>>name;
        cities[i].setName(name);
        cout<<"enter population for "<<cities[i].getName()<<endl;
        cin>>pop;
        cities[i].setInhabitants(pop);
        cout<<"enter mayor name for "<<cities[i].getName()<<endl;
        cin.ignore();
        getline(cin, mname);
        cities[i].setMayor(mname);
        cout<<"enter area in km2 for "<<cities[i].getName()<<endl;
        cin>>area;
        cities[i].setArea(area);
    }
    for (int i = 0; i < 3; i++){
      cities[i].print();
    }

    delete [] cities;
    return 0;
}
