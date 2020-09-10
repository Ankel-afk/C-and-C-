#include "Rectangle.h"

class Square : public Rectangle{
public:
  Square(const char *n, double a);
  ~Square(){}
  double calcArea() const;
  double calcPerimeter() const;
private:
  double side;


};
