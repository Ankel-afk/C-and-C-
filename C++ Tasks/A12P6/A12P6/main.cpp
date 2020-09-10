/*
CH-230-A
a12 p7.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{    Fraction a, b;
    std::cout<<"Enter fraction using whitespace format: num / num\n";
    cin>>a;
    cin.ignore();
    cin>>b;
    cout<<a * b;
    cout<<a / b;
    Fraction sum = a+b;
    Fraction sub = a - b;
    cout<<"sum is "<<sum<<endl;
    cout<<"subtraction is "<<sub<<endl;
    
    cout<<"greater fraction is: ";
    cout<< (a > b ? a : b)<<endl;
    return 0;
}
