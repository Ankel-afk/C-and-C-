/*
CH-230-A
a12 p7.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {

private:                        // internal implementation is hidden
    int num;                    // numerator
    int den;                    // denominator

    int gcd(int a, int b);        // calculates the gcd of a and b
    int lcm(int a, int b);

public:
    Fraction();                    // empty constructor
    Fraction(int, int = 1);     // constructor taking values for fractions and
                                // integers. Denominator by default is 1
    void print();
    //cout operator requires a whitespace and a slash between the inputs
    
    friend std::ostream & operator <<( std::ostream &out, const Fraction& z );
    
    Fraction operator/ (const Fraction& c);
    Fraction operator* (const Fraction& c);
    Fraction operator+ (const Fraction& c);
    Fraction operator- (const Fraction& c);
    Fraction& operator= (const Fraction& c );
    bool operator>(const Fraction& c);
    bool operator<(const Fraction& c);
    //fractions are entered as num / num in cin.
    //entering a 0 as a denominator is not allowed
    friend void operator >>( std::istream &in, Fraction& z );
    // prints it to the screen
};

int LCM(int d1, int d2);
#endif /* FRACTION_H_ */
