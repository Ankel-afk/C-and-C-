/*
CH-230-A
a10 p9.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#include "Complex.h"
using namespace std;
int main(){
    double im;
    double rl;
    cout<<"enter real part: "<<endl;
    cin>>rl;
    cout<<"enter imaginary part: "<<endl;
    cin>>im;
    Complex a(rl, im);
    a.print();
    cout<<"enter real part: "<<endl;
    cin>>rl;
    cout<<"enter imaginary part: "<<endl;
    cin>>im;


    Complex b(rl, im);
    b.print();
    cout << "conjugate of a is: ";
    a.conjugate();
    Complex c = a.add(b);
    cout<<"sum of two instances is: ";
    c.print();
    c = a.subtract(b);
    cout<<"difference of two instances is ";
    c.print();
    c = a.multiply(b);
    cout<<"multiplication of two instances is: ";
    c.print();



    /*
    a) the conjugate of the first instance should be determined and printed on the screen;
b) the sum of the two instances should be determined and printed on the screen;
c) the difference between the second and first instance should be determined and printed on
the screen;
d) the multiplication of the two instances should be determined and printed on the screen.
*/



    return 0;
}
