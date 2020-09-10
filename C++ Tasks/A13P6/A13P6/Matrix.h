/*
CH-230-A
a13 p6.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#ifndef Matrix_h
#define Matrix_h

class Vector;
class Matrix;
Vector operator*(const Vector& v, const Matrix& m);


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
    friend Vector operator*(const Matrix& m, const  Vector& v);
    friend Vector operator*( const  Vector& v, const Matrix& m);
};
#endif /* Matrix_hpp */
