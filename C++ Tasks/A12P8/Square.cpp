#include "Square.h"
#include <iostream>
Square::Square(const char *n, double a) : Rectangle(n, a, a){
  side = a;
}
double Square::calcArea() const{
  std::cout<<"calcArea of Square";
  return side * side;
}
double Square::calcPerimeter() const{
  std::cout<<"calcPerimeter of Square";
  return 4 *side;
}
