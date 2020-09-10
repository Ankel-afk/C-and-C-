//
//  main.cpp
//  PP19
//
//  Created by Jose Ignacio Biehl on 07.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//

#include <iostream>
using namespace std;

class Complex {
private:
    float real; // real part
    float imag; // imaginary part
public:
    Complex(){
        real = 1;
        imag = 69;
    };
    Complex(float, float = 0);
    double magnitude() const{
        return real*real - imag*imag;
    }
    void print();
    
    friend std::ostream& operator<<(std::ostream& out, const Complex& c){
        if (c.imag)
            return out << noshowpos << c.real << showpos << c.imag << "i" << endl;
        else
            return out << noshowpos<<c.real<<endl;
    }
    bool operator> (const Complex& a) const {
       return (this->magnitude() > a.magnitude() ? true : false );
    }
    bool operator<(const Complex& a) const {
        return (this->magnitude() < a.magnitude() ? true : false );
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Complex a;
    cout<<a;
    return 0;
}
