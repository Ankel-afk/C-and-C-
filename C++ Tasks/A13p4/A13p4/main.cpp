/*
CH-230-A
a13 p4.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B: virtual public A // add virtual keyword
{
public:
  B()  { setX(10); }
};
 
class C:  virtual public A // add virtual keyword
{
public:
  C()  { setX(20); }
};
 //diamond shape problem occurs without virtual inheritance
//because classes B and C each have their own 'x' members.
//virtual keyword ensures we do not overlap.
// X ends up being 20 because of the order in which constructors are called.
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}
