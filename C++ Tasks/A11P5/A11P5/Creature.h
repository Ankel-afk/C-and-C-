/*
CH-230-A
a11 p5.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#ifndef Creature_h
#define Creature_h
#include <iostream>

using namespace std;

class Creature {
    public:
        Creature();
        void run() const;

    protected:
        int distance;
};


class Pillarman : public Creature {

public:
    //default constructor gives power level 5
    Pillarman();
    void freezeattack() const;
    void drain() const;
    //destructor message
    ~Pillarman();

protected:
    int powerFactor;
};


class Vampire : public Creature {
public:
    //default constructor will also inherite a biteforce of 3
    Vampire();
    void bite() const;
    //destructor message
    ~Vampire();
private:
    int BiteForce;
};

class Wizard : public Creature {
    public:
        Wizard();
        void hover() const;

    private:
        int distFactor;
};




#endif /* Creature_h */

