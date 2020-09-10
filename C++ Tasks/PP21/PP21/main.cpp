//
//  main.cpp
//  PP21
//
//  Created by Jose Ignacio Biehl on 07.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//


#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Object3d{
protected:
    std::string name;
public:
    virtual double volume() = 0;
    Object3d(string n){
        name = n;
    }
    Object3d(){
        name = "default object3d";
    }
    virtual ~Object3d(){}
};
    
class Sphere :  public Object3d{
protected:
    double radius;
public:
    double volume(){
        return M_PI * 4/3 * radius*radius*radius;
    }
    Sphere(string n, double r) : Object3d(n){
        radius = r;
    }
};
class Cylinder :  public Object3d{
protected:
    double radius;
    double height;
public:
    double volume(){
        return M_PI * radius*radius*height;
    }
    Cylinder(string n, double rad, double h) : Object3d(n){
        radius = rad;
        height = h;
    }
};
class RectPrism: public Object3d{
protected:
    double length, width, height;
public:
    double volume(){
        return length * width * height;
    }
    RectPrism(string n, double l, double w, double h) : Object3d(n){
        length = l; width = w; height = h;
    }
        
        
    
};
class Cube :  virtual public RectPrism {
protected:
    double side;
public:
    double volume(){
        return side*side*side;
    }
    Cube(string n, double s) : RectPrism(n, 0,0,0){
        side = s;
    }
    
};
// add your code below
int main() {
Object3d *arr[5];
arr[0] = new Sphere("sphere", 1.3);
arr[1] = new RectPrism("rectprism", 2.0, 3.0, 4.0);
arr[2] = new Cylinder("cylinder", 2.0, 1.3);
arr[3] = new Cube("cube", 2.0);
arr[4] = new RectPrism("rectprism2", 1.0, 2.0, 3.5);
int i;
for(i=0; i<5; i++)
cout << arr[i]->volume() << endl;
for(i=0; i<5; i++)
delete arr[i];
return 0;
}

