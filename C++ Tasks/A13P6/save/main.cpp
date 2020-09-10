//
//  main.cpp
//  A13P6
//
//  Created by Jose Ignacio Biehl on 30.11.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//
/*Extend your previous source code for working with vectors (Vector.h and Vector.cpp) and
write a Matrix class (Matrix.h, Matrix.cpp) for operations with matrices. If you did not
write a Vector class for one of the previous bonus problems, then write one with minimal functionality as needed for this problem. Then write a testing program which illustrates operations
between matrices and vectors (testmatvec.cpp) using the operations described as in the following.
• Overload the operators << and >> to be able to enter matrices and vectors from the standard
input and from files (e.g., in1.txt, in2.txt, etc.), and to send matrices and vectors to the
standard output and to files (e.g., out1.txt, out2.txt, etc.). You have the freedom to set
the structure of the input files.
• Overload the operator ∗
for computing the product of a vector and a matrix, and a matrix
and a vector. For simplicity reasons you can consider a vector to be either a row vector or
a column vector such that mathematical multiplication with a matrix is possible. By this
convention, the result of the multiplication is also a vector (row vector or column vector).
Your implementation has to check if the operations between matrix and vector, and vector and
matrix are valid or not (concerning the compatibility between a vector and matrix concerning the
amount of elements in them). Besides this you can assume that the input of the testing program
will be valid, the necessary input files have a valid content if existing.**/
#include <iostream>
#include "Vector.h"




using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    Matrix a(3,2);
    cin>>a;
    cout<<a;
    
    return 0;
}
