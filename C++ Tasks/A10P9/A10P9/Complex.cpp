/*
CH-230-A
a10 p9.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"
using namespace std;

Complex::~Complex(){
}
Complex::Complex(){
  real = 0;
  imaginary = 0;
}
Complex::Complex(double r, double i){
  real = r;
  imaginary = i;
}
Complex::Complex(const Complex& src){
  real = src.real;
  imaginary = src.imaginary;
}
//setter methods
void Complex::setReal(double re){
  real = re;

}
void Complex::setImaginary(double im){
  imaginary = im;

}
//getter methods
double Complex::getReal(){
  return real;
}
double Complex::getImaginary(){
  return imaginary;
}
void Complex::print(){
  cout<<real<<" + "<<imaginary<<"i\n";
}

Complex Complex::add(Complex c2){
  Complex res;

  res.real = real + c2.real;
  res.imaginary = imaginary + c2.imaginary;

  return res;
}
Complex Complex::subtract(Complex part2){
  Complex res;
  res.imaginary = imaginary - part2.imaginary;
  res.real = real - part2.real;
  return res;

}
//multiplies
//f z1 = a + bi and z2 = c + di
//z2 = (a · c − b · d) + (b · c + a · d)i.
Complex Complex::multiply(Complex part2){
  Complex res;
  res.imaginary = (imaginary * part2.real+ real * part2.imaginary);
  res.real = (real * part2.real - imaginary * part2.imaginary);
  return res;
}

//does division
Complex Complex::divide(Complex part2){
  Complex res;
  res.imaginary = imaginary / part2.imaginary;
  res.real = real / part2.real;
  return res;
}
//prints conjugate
void Complex::conjugate(){
  if (imaginary > 0){
    cout<<real<<" - "<<imaginary<<"i\n";
  }
  else{
    cout<<real<<" + "<<imaginary *-1<<"i\n";
  }
}
