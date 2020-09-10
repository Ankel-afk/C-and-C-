/*
CH-230-A
a13 p6.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include "Vector.h"
#include "Matrix.h"
#include <iostream>

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

Vector operator*(const Matrix& m, const  Vector& v){
        Vector res(m.row);
        for (int i =0; i < m.row; i++){
                double sum = 0;
                //sum all of the values in the row times the scalar
                for( int j =0; j < m.column; j++){
                sum += v.values[j]*m.values[i][j];
                }
            res.values[i] = sum;
        }
        return res;
}
Vector operator*( const  Vector& v, const Matrix& m){
    Vector res(m.column);
            for (int i = 0; i < m.column; i++){
                double sum = 0;
                for (int j = 0; j <m.row; j++ ){
                    sum += v.values[j] * m.values[j][i];
                    }
            res.values[i] = sum;
            }
    return res;
            
}
