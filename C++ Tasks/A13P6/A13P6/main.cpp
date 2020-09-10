/*
CH-230-A
a13 p6.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#include "Vector.h"
#include "Matrix.h"
#include <fstream>


using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    char fileorinput;
    cout<<"welcome to the vector emporium! to use files, enter f\n";
    cout<<"to use standard input, enter anything else!";
    cin>>fileorinput;
    if (fileorinput != 'f'){

      int r;
      int c;
      cout<<"enter dimensions of matrix: \n";
      cout<<"row= ";
      cin>>r;
      cout<<"col= ";
      cin>>c;

      Matrix a(r,c);
      cin>>a;
      cout<<a;
      cout<<"enter size of vector";
      int v;
      cin>>v;
      Vector b(v);
      cin>>b;

      if(c == v){
          cout<<a*b;
      }
      else if (r == v)
        cout<<b*a;
      else{
          cout<<"incorrect vector input\n";
      }
      return 0;
}
  else{


      //vector stuff
      int vectorinodimension;
      cout<<"enter vector dimension";
      cin>>vectorinodimension;
      Vector fVector(vectorinodimension);

      string vname;
      cout<<"enter vector file name: ";
      cin>>vname;
      ifstream vectorFile(vname);
      vectorFile>>fVector;
      //matrix stuff
      
      int frow, fcol;
      string mname;
      cout<<"enter rows of matrix: ";
      cin>>frow;
      cout<<"enter columns of matrix: ";
      cin>>fcol;
      
      Matrix fMatrix(frow, fcol);
      
      cout<<"enter matrix file name: ";
      cin>>mname;
      ifstream matrixFile(mname);
      if (!matrixFile.good()){
          cout<<"error opening matrix file";
          exit(1);
      }
      matrixFile>>fMatrix;
      
      //print to output
      
      
        ofstream out("output.txt");
        if (fcol == vectorinodimension){
        
            cout<<"doing matrix x row vector operation\n";
          
          out<< fMatrix * fVector;
        }
        else if (frow == vectorinodimension){
            cout<<"doing column vector x matrix operation\n";
            out<<fVector * fMatrix;
        }
         else {
          cout<<"incorrect matrix and vector combination! exiting . . .\n ";
          exit(1);
          return 0;
      }
    }
}
