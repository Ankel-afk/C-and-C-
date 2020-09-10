/*
CH-230-A
a11 p4.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include "Creature.h"
#include <iostream>
using namespace std;
int main()
{


    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();


    Pillarman eisidisi;
    eisidisi.freezeattack();
    cout<<"eisidisi runs away!\n";
    eisidisi.run();
    
    Vampire DioBrando;
    DioBrando.bite();
    DioBrando.run();
//destructors should be called here
    return 0;
}
