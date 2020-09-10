/*
CH-230-A
a13 p5.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/


#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A
{
public:
  C():A(10) {  }
};
 
class D: public B,  public C {
public:
    D() : A(10), B(), C() { } //made a constructor for D that will inherit A(10)
    
};
 
int main()
{
    D d; // no matching empty constructor for D
    d.print();
    return 0;
}
