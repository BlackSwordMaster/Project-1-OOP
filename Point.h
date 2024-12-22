#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cassert>
using namespace std;

class Point{
    private:
    double xCord;
    double yCord;
    public:
    //constructer with 2 parameter
    Point(double x, double y);
    //constructer that initializes x and y to 0
    Point();
    //getter
    double getX()const;//make it const so it works in distance
    double getY()const;
    //setter
    void setX(double x);
    void setY(double y);
    //Member output 
    void output();

    //overload the insertion operator <<
    friend ostream& operator<<(ostream& os, const Point& p);
    //overload the extraction operator >>
    friend istream& operator>>(istream& is, Point& p);
    friend bool operator==(const Point& p1,const Point& p2);

    Point operator+(const Point& otherC);
    Point operator+(int intV);
    Point operator+=(const Point& otherC);
    Point operator+=(int intv);

    double& operator[](int index);

    //Increment operators
    //prefix ++
    Point& operator++();
    //postfix ++
    Point operator++(int);
};

#endif