/*
CH-230-A
a11 p5.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include "Creature.h"
#include <iostream>
using namespace std;
int main()
{
    string command;
    while (true){
        cout<<"enter command: wizard makes a wizard, object1, makes a pillar man ";
        cout<<" object2 makes a vampire, quit stops everything\n";
        cin>>command;
        if (command.compare("quit") == 0)
          break;
        else if (command == "wizard"){
          Wizard* w = new Wizard;
          w->run();
          w->hover();
            delete w;
        }
        else if (command == "object1"){
            Pillarman *eisidisi = new Pillarman;
            eisidisi->freezeattack();
            cout<<"eisidisi runs away!\n";
            eisidisi->run();
            delete eisidisi;
        }
        else if (command == "object2"){
        Vampire *DioBrando = new Vampire;
        DioBrando->bite();
        DioBrando->run();
        delete DioBrando;
        }
        else{
            cout<<"unknown command\n";
        }
    }


    return 0;
}
