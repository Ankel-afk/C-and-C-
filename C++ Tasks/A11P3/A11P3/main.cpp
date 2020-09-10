/*
CH-230-A
a11 p3.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

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
    Pillarman() : powerFactor(5){
        cout<<"\nA new pillar man has awakened!"<<endl;
    }
    void freezeattack() const{
        cout<<"frozen for " << 0.25 * powerFactor << " seconds!"<<endl;
    }
    void drain() const{
        cout<<"drained for something, I'm too sleep deprived to implement it!";
        cout<<"but it has a power level of "<<powerFactor<<endl;
    }
    //destructor message
    ~Pillarman(){
        cout<<"Pillarman hit the ground too hard\n"<<endl;
    }

protected:
    int powerFactor;
};


class Vampire : public Creature {
public:
    //default constructor will also inherite a biteforce of 3
    Vampire(): BiteForce(3){
        cout<<"\nA new vampire has awakened!"<<endl;
    }
    void bite() const{
        cout<<"bites with "<<BiteForce<<" megatonnes of force!"<<endl;
    }
    //destructor message
    ~Vampire(){
        cout<<"Vampire tried to go into the sunlight\n";
    }
private:
    int BiteForce;
};




Creature::Creature(): distance(10)
{}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

class Wizard : public Creature {
    public:
        Wizard();
        void hover() const;

    private:
        int distFactor;
};





Wizard::Wizard() : distFactor(3)
{}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

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

    return 0;
}
