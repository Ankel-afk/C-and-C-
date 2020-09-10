/*
CH-230-A
a12 p1.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#include <iostream>

#include "Shapes.h"
using namespace std;
int main(){
    //making an array because I am lazy
    Hexagon* hexarr;
    hexarr = new Hexagon[3];
   hexarr[0] = Hexagon("this is unnecessarily tedious", 0, 0,9, "blue");
    hexarr[1] = Hexagon("hexagon number two", 0, 0 ,15, "green");
    hexarr[2] = Hexagon(hexarr[1]);
    for (int i = 0; i < 3; i++){
        cout<< "area of "<<hexarr[i].getColor()<<" hexagon is "<<hexarr[i].area()<<endl;
        cout<< "perimeter of "<<hexarr[i].getColor()<<" hexagon is "<<hexarr[i].perimeter()<<endl<<endl;

    }
    delete [] hexarr;

    return 0;
}
