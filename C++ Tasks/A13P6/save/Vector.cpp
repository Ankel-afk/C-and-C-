//
//  Vector.cpp
//  A13P6
//
//  Created by Jose Ignacio Biehl on 30.11.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//

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


Matrix::Matrix(){
    column = 0;
    row = 0;
    values = NULL;
    
}
Matrix::Matrix(int r, int c){
    row = r;
    column = c;
    values = new double*[row];
    for (int i = 0; i < row; i++){
        values[i] = new double[column];
        
    }
}
Matrix::Matrix(int r, int c, double**val){
    row = r;
    column = c;
    values = val;
}
std::ostream& operator<<(std::ostream &out, Matrix& m){
    for(int i = 0; i < m.row; i++){
        for (int j = 0; j < m.column; j++){
            out<<m.values[i][j]<<" ";
        }
        out<<"\n";
    }
    return out;
}
std::istream& operator>>(std::istream &in, Matrix& m){
    for (int i = 0; i < m.row; i++){
        for (int j = 0; j < m.column; j++){
            in>>m.values[i][j];
        }
    }
    return in;
    

}
Matrix::~Matrix(){
    for (int i = 0; i < row; i++){
        delete [] values[i];
    }
    delete [] values;
}

Vector operator*(const Vector& v, const Matrix& m){
    Vector attempt(2);
    attempt.values[0] = v.values[0] + m.values[0][0];
    return attempt;
}
