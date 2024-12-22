#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"

class Rectangle{
    private:
    double height;
    double width;
    Point Llcornor;
    public:
    Rectangle();
    Rectangle(double w,double h, Point c);
    void output()const;

    // function to return the circumfrance
    double circumference()const;

    //function to return the area
    double area()const;

    friend ostream& operator<<(ostream& os, const Rectangle& r);
    friend istream& operator>>(istream& is, Rectangle& r);

    double operator[](int index);
};

#endif