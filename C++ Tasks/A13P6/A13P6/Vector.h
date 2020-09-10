/*
CH-230-A
a13 p6.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#ifndef Vector_h
#define Vector_h
#include <iostream>
//declare the classes so the compiler doesn't get its jimmies rustled
//with the friend functions
class Vector;
class Matrix;
Vector operator*(const Vector& v, const Matrix& m);
Vector operator*( const  Vector& v, const Matrix& m);


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
    friend Vector operator*(const Matrix& m, const  Vector& v);
    friend Vector operator*( const  Vector& v, const Matrix& m);
};


#endif /* Vector_h */
