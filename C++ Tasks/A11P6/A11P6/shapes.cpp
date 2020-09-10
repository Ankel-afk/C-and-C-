/*
CH-230-A
a11 p6.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"
# define PI 3.14159265359
using namespace std;
string Shape::getName(){
  return name;
}
void Shape::setName(string& n){
  name = n;
}
Shape::Shape(const string& n) : name(n) {
}
Shape::Shape(){
    name = "default_name";
}
void Shape::printName() const {
    cout << name << endl;
}


void CenteredShape::setxy(double eks, double wai){
  x = eks;
  y = wai;
}//prints x and y
void CenteredShape::getxy(){
    cout<<"("<<x<<", "<< y << ")"<<endl;
}


CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
    x = nx;
    y = ny;
}
CenteredShape::CenteredShape() : Shape(){
    x = 0;
    y = 0;

}
//copy constructor
Shape::Shape(const Shape& a){}

CenteredShape::CenteredShape(const CenteredShape& a) : Shape(a){
}

RegularPolygon::RegularPolygon(const RegularPolygon& a) : CenteredShape(a){
}

Circle::Circle(const Circle& a) : CenteredShape(a){}
Rectangle::Rectangle(const Rectangle& a) : RegularPolygon(a){}
Square::Square(const Square&a) : Rectangle(a){}



RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
    CenteredShape(n,nx,ny)
{
    EdgesNumber = nl;
}
RegularPolygon::RegularPolygon(int n) : CenteredShape(){
    EdgesNumber = n;
}
RegularPolygon::RegularPolygon() : CenteredShape(){
    EdgesNumber = 4;
}
void RegularPolygon::setEdgesNumber(int edgelord){
  EdgesNumber = edgelord;
}
int RegularPolygon::getEdgesNumber(){
  return EdgesNumber;
}
Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
    Radius = r;
}
Circle::Circle() : CenteredShape(){
    Radius = 1;
}

double Circle::getRadius(){
  return Radius;
}
void Circle::setRadius(double r){
  Radius = r;
}




Rectangle::Rectangle() : RegularPolygon(4){
    height = 1;
    width = 2;
}
Rectangle::Rectangle(const std::string& n, double nx, double ny, double nwidth,
              double nheight) : RegularPolygon(n, nx, ny, 4){
  width = nwidth;
  height = nheight;
}

void Rectangle::setWidth(double w){
  width = w;
  }
void Rectangle::setHeight(double h){
  height = h;
  }
double Rectangle::getWidth(){
  return width;
  }
double Rectangle::getHeight(){
  return height;
  }

Square::Square() : Rectangle(){
  size = 1;
}
Square::Square(const string& n, double nx, double ny, double nside): Rectangle(n, nx, ny, 0, 0){
  size = nside;
}

void Square::setSize(double s){
  size = s;
}
double Square::getSize(){
  return size;
}
//area definitions
double Rectangle::area(){
  return height * width;
}
double Square::area(){
  return size * size;
}
double Circle::area(){
  return PI * Radius * Radius;
}
//perimeter definitions
double Rectangle::perimeter(){
  return 2*height + 2*width;
}
double Circle::perimeter(){
  return 2 * PI * Radius;
}
double Square::perimeter(){
  return size * 4;
}
