/*
CH-230-A
a11 p1.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#ifndef Box_h
#define Box_h
class Box{
private:
    double depth, width, height;
public:
    double getDepth();
    double getWidth();
    double getHeight();
    double calcVolume();

    void setDepth(double v);
    void setWidth(double v);
    void setHeight(double v);

    Box(const Box&);
    Box();
    Box(double h, double w, double d);
    ~Box();

};

#endif /* Box_h */
