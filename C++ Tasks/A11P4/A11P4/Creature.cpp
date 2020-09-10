/*
CH-230-A
a11 p4.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#include "Creature.h"
using namespace std;
Creature::Creature(): distance(10)
{}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}


Pillarman::Pillarman() : powerFactor(5){
    cout<<"\nA new pillar man has awakened!"<<endl;
}
void Pillarman::freezeattack() const{
    cout<<"frozen for " << 0.25 * powerFactor << " seconds!"<<endl;
}
void Pillarman::drain() const{
    cout<<"drained for something, I'm too sleep deprived to implement it!";
    cout<<"but it has a power level of "<<powerFactor<<endl;
}
//destructor message
Pillarman::~Pillarman(){
    cout<<"Pillarman hit the ground too hard\n"<<endl;
}

Vampire::Vampire(): BiteForce(3){
    cout<<"\nA new vampire has awakened!"<<endl;
}
void Vampire::bite() const{
    cout<<"bites with "<<BiteForce<<" megatonnes of force!"<<endl;
}
//destructor message
Vampire::~Vampire(){
    cout<<"Vampire tried to go into the sunlight\n";
}


Wizard::Wizard() : distFactor(3)
{}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}


