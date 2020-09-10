//
//  Vector.h
//  A13P6
//
//  Created by Jose Ignacio Biehl on 30.11.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//

#ifndef Vector_h
#define Vector_h
#include <iostream>
//declare the classes so the compiler doesn't get its jimmies rustled
//with the friend functions
class Vector;
class Matrix;
Vector operator*(const Vector& v, const Matrix& m);



class Vector{
private:
    
    int size;
    double* values;
public:
    
    friend std::ostream& operator<<(std::ostream& out, const Vector &v);
    friend std::istream& operator>>(std::istream& in, Vector &v);
    Vector operator* (Vector c);
    
    Vector();
    Vector(int n);
    Vector(int n, double* vs);
    ~Vector();
    friend Vector operator*(const Vector& v, const Matrix& m);
};

class Matrix{
private:
    double** values;
    int row;
    int column;
public:
    Matrix();
    Matrix(int r, int c);
    Matrix(int r, int c, double**val);
    friend std::ostream& operator<<(std::ostream& out, Matrix& m);
    friend std::istream& operator>>(std::istream& in, Matrix& m);
    ~Matrix();
    friend Vector operator*(const Vector& v, const Matrix& m);
    
    
};

#endif /* Vector_h */
