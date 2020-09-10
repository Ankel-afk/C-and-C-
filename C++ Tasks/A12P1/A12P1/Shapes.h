/*
CH-230-A
a12 p1.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {            // base class
    private:                   // private access modifier: could also be protected
        std::string name;   // every shape will have a name
    public:
        Shape(const std::string&);  // builds a shape with a name
        Shape();                    // empty shape
        Shape(const Shape&);        // copy constructor
        void printName() const ;      // prints the name
};

class CenteredShape : public Shape {  // inherits from Shape
    private:
        double x,y;  // the center of the shape
    public:
        CenteredShape(const std::string&, double, double);  // usual three constructors
        CenteredShape();
        CenteredShape(const CenteredShape&);
        void move(double, double);    // moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
    private:
        int EdgesNumber;
    public:
        RegularPolygon(const std::string&, double, double, int);
        RegularPolygon();
        RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
    private:
        double Radius;
    public:
        Circle(const std::string&, double, double, double);
        Circle();
        Circle(const Circle&);
};

class Hexagon : public RegularPolygon {
private:
    double side;
    std::string color;
public:
    void setSide(double s);
    void setColor(std::string c);

    std::string getColor();
    double getSide ();
    Hexagon(const std::string&, double, double, double, std::string);
    Hexagon(const Hexagon&);
    Hexagon(); //empty constructor
    double perimeter();
    double area();


};

#endif
