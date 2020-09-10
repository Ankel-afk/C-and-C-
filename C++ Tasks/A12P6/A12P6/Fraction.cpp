/*
CH-230-A
a12 p7.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);

    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
    int tmp_gcd = 1;

    // Implement GCD of two numbers;

    return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);

}

void Fraction::print()
{
    std::cout << num << "/" << den << std::endl;
}

std::ostream& operator <<( std::ostream &out, const Fraction& z ){
    out << z.num <<"/" << z.den <<std::endl;
    return out;
}
void operator >>( std::istream &in, Fraction& z ){
    std::string slash;
    bool retry;
   do{
        in >> z.num >> slash >> z.den;
        if (z.den != 0){
            retry = false;
        }
        else{
            std::cout<<"invalid denominator, reenter fraction\n";
            retry = true;
        }
    }while(retry == true);
            
}
Fraction Fraction::operator/ (const Fraction& c){
        Fraction res(this->num * c.den, this->den * c.num);
        return res;
    }
Fraction Fraction::operator* (const Fraction& c){
    Fraction res(this->num * c.num, this->den * c.den);
    return res;
}
Fraction Fraction::operator+ (const Fraction& c)
            {
            Fraction res;
            res.num = this->num*LCM(this->den, c.den)/this->den+c.num*LCM(this->den, c.den)/c.den;
            res.den =LCM(this->den, c.den);
            return res;
            }
            Fraction Fraction::operator- (const Fraction& c)
            {
            Fraction res;
            res.num = this->num*LCM(this->den, c.den)/this->den-c.num*LCM(this->den, c.den)/c.den;
            res.den =LCM(this->den, c.den);
            return res;
            
            
            }
Fraction& Fraction::operator= (const Fraction&c )
            {
            this->num = c.num;
            this->den = c.den;
            return *this;
            
            
            }
bool Fraction::operator>(const Fraction& c)
            {
            bool res = (this->num*LCM(this->den, c.den)/this->den) > (c.num*LCM(this->den, c.den)/c.den) ? true : false;
            return res;
            }
bool Fraction::operator<(const Fraction& c)
        {
        bool res = (this->num*LCM(this->den, c.den)/this->den) < (c.num*LCM(this->den, c.den)/c.den) ? true : false;
        return res;
        }
    
int GCD(int a, int b){
   if (b == 0)
            return a;
   else{
        return GCD(b, a % b);
    }
}
int LCM(int a, int b){
            return (a * b)/GCD(a,b);
}
