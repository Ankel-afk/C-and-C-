/*
CH-230-A
a13 p6.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#include "Vector.h"
#include <iostream>
std::ostream& operator<<(std::ostream& out, const Vector &v){
    for (int i = 0; i < v.size; i++){
        out<<v.values[i]<<" ";
        }
    return out;
}
std::istream& operator>>(std::istream& in, Vector &v){
    for (int i = 0; i < v.size; i++){
        in>>v.values[i];
    }
    return in;
    }

Vector operator* (Vector c);

Vector::Vector(){
    size = 0;
    values = NULL;
}
Vector::Vector(int n){
    size = n;
    values = new double[n];
}


Vector::Vector(int n, double* vs){
    size = n;
    values = vs;
}
Vector::~Vector(){
    delete [] values;


}
