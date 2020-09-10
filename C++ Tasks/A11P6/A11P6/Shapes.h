/*
CH-230-A
a11 p6.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
using namespace std;

class Shape {            // base class
    private:                   // private access modifier: could also be protected
        std::string name;   // every shape will have a name
    public:
        Shape(const std::string&);  // builds a shape with a name
        Shape();                    // empty shape
        Shape(const Shape&);        // copy constructor
        void printName() const ;      // prints the name
        void setName(string& n);
        string getName();
};

class CenteredShape : public Shape {  // inherits from Shape
    private:
        double x,y;  // the center of the shape
    public:
        void getxy();
        void setxy(double eks, double wai);
        CenteredShape(const std::string&, double, double);  // usual three constructors
        CenteredShape();
        CenteredShape(const CenteredShape&);
        void move(double, double);    // moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
protected:
        int EdgesNumber;
    public:
        void setEdgesNumber(int edgelord);
        int getEdgesNumber();
        RegularPolygon(const std::string&, double, double, int);
        RegularPolygon();
        RegularPolygon(int n);
        RegularPolygon(const RegularPolygon&);
};
class Rectangle : public RegularPolygon{
private:
    double width;
    double height;

public:
    Rectangle();
    Rectangle(const Rectangle&);
    double area();
    void setWidth(double w);
    void setHeight(double h);
    double getWidth();
    double getHeight();
    double perimeter();

    Rectangle(const std::string& n, double nx, double ny, double nwidth,
              double nheight);
};

class Square : public Rectangle {
private:
    double size;
public:
  void setSize(double s);
  Square(const Square&);
  double getSize();
  double area();
  double perimeter();
    Square();
    Square(const string& n, double nx, double ny, double nside);
};


class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
    private:
        double Radius;
    public:
        Circle(const std::string&, double, double, double);
        Circle();
        Circle(const Circle&);
        double getRadius();
        void setRadius(double r);
        double area();
        double perimeter();
};
//copy
#endif
