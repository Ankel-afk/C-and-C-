/*
CH-230-A
a12 p1.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"
#include <cmath>
using namespace std;

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
    cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
    x = nx;
    y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
    CenteredShape(n,nx,ny)
{
    EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
    Radius = r;
}
Hexagon::Hexagon(const std::string& n, double nx, double ny, double s, std::string clr) : RegularPolygon(n, nx, ny, 6){
    side = s;
    color = clr;
}

double Hexagon::perimeter(){
    return 6 * side;
}
double Hexagon::area(){
    return 3 * sqrt(3)/2 * side*side;

}
Shape::Shape(const Shape& cpy){
    name = cpy.name;
}
CenteredShape::CenteredShape(const CenteredShape& cpy) : Shape(cpy){
    x = cpy.x;
    y = cpy.y;
}
RegularPolygon::RegularPolygon(const RegularPolygon& cpy) : CenteredShape(cpy){
    EdgesNumber = cpy.EdgesNumber;
}
//cpy constructors
Hexagon::Hexagon(const Hexagon& cpy) : RegularPolygon(cpy){
    side = cpy.side;
    color = cpy.color;
}
Circle::Circle(const Circle& cpy) : CenteredShape(cpy){
    Radius = cpy.Radius;
}
//empty constructor made from a regular polygon, woe is me
Hexagon::Hexagon() : RegularPolygon("", 0, 0, 6){

}
void Hexagon::setSide(double s){
    side = s;
}
void Hexagon::setColor(std::string c){
    color = c;
}
//setter and getter methods
std::string Hexagon::getColor(){
    return color;
}

double Hexagon::getSide(){
    return side;
}
