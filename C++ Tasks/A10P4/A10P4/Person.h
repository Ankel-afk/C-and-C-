/*
CH-230-A
a10 p4.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
using namespace std;
#include <iostream>

#ifndef Person_h
#define Person_h
class Person{
private:
    string name;
    int age;
    double height;
    bool depressed;
public:
    void setAge(int newage);
    void setHeight(double newheight);
    void setName(string& newage );
    void setDepressed(bool newdepressed);

    int getAge();
    double getHeight();
    string getName();
    bool getDepressed();



};










#endif /* Person_h */
