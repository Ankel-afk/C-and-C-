/*
CH-230-A
a11 p2.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include <iostream>
using namespace std;

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
    Person();
    Person(const string n, const int a, const double h, const bool d);
    Person(const Person&);

    void print();


};
