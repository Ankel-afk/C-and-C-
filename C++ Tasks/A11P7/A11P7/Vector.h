//
//  Vector.h
//  A11P7
//
//  Created by Jose Ignacio Biehl on 16.11.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//

#ifndef Vector_h
#define Vector_h

class Vector{
private:
  int size;
  double* components;

public:
  Vector();
  Vector(const int& s, double*& values);
  Vector(const Vector&);
  ~Vector();
  void setSize(const int& s);
  void setComponents(double*& values);
  void print();
  double norm();
  Vector add(const Vector a) const;
  Vector diff(const Vector a) const ;
  Vector scalar(const Vector a) const ;
};

#endif
