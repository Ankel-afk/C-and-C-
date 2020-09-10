//
//  main.cpp
//  A11P7
//
//  Created by Jose Ignacio Biehl on 16.11.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
#include <iostream>
#include "Vector.h"

Vector::Vector(){
  double *arr = new double[2];
  size = 2;
  arr[0] = 1;
  arr[1] = 2;
  components = arr;
}

Vector::Vector(const int& s, double*& values){
  size = s;
  components = values;
}
Vector::Vector(const Vector& a){
  size = a.size;
    //copy every value to a new array
    components = new double[a.size];
    for (int i = 0; i < a.size; i++){
      components[i] = a.components[i];
    }
  }
Vector::~Vector(){
  delete [] components;
}

void Vector::setSize(const int& s){
  size = s;
}
void Vector::setComponents(double*& values){
  //free whatever we had before
  delete[] components;
  components = values;
  }
void Vector::print(){
  for (int i = 0; i < size; i++){
    std::cout<<components[i]<<" ";
  }
  std::cout<<std::endl;
}
Vector Vector::add(const Vector a) const{

  /*consider cases: if vectors a and b are of the same size, then all is ok*/
  if (a.size == size){
    double* newvalues;
    newvalues = new double[size];
    for (int i = 0; i < size; i++){
      newvalues[i] = components[i] + a.components[i];
    }
    Vector result(size, newvalues);
    return result;

  }
}
Vector Vector::diff(const Vector a) const ;
Vector Vector::scalar(const Vector a) const ;



int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
