/*
CH-230-A
a9 p8.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include <string>
#include <iostream>
using namespace std;
//swaps two ints by true ref
void swapping(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    
} // swap ints
void swapping(float &a, float &b) {
    float temp;
    temp = a;
    a = b;
    b = temp;
    
} // swap floats
//& reference thing is always applied as rightmost thing in initiation?
void swapping( const char * &a, const char * &b) {
    const char* temp;
    temp = a;
    a = b;
    b = temp;
    
} // swap char pointers
int main(int argc, const char * argv[]) {
    
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}
