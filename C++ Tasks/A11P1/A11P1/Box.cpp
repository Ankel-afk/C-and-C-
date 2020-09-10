/*
CH-230-A
a11 p1.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#include "Box.h"
double Box::getDepth(){
    return depth;
}
double Box::getWidth(){
    return width;
}
double Box::getHeight(){
    return height;
}

void Box::setDepth(double v){
    depth = v;
}
void Box::setWidth(double v){
    width = v;
}
void Box::setHeight(double v){
    height = v;
}

Box::Box(const Box& cpy){
    width = cpy.width;
    height = cpy.height;
    depth = cpy.depth;
}
Box::Box(){
    height = 0;
    width = 0;
    depth = 0;
}
Box::Box(double h, double w, double d){
    height = h;
    width = w;
    depth = d;

}
double Box::calcVolume(){
  return depth * height * width;
}
//destructor
Box::~Box(){
    
}
