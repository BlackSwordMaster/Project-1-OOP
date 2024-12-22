#include "Point.h"

    //constructer with 2 parameter
    Point::Point(double x, double y):xCord(x),yCord(y){}
    //constructer that initializes x and y to 0
    Point::Point():xCord(0),yCord(0){}
    //getter
    double Point::getX()const{return xCord;}//make it const so it works in distance
    double Point::getY()const{return yCord;}
    //setter
    void Point::setX(double x){xCord=x;}
    void Point::setY(double y){yCord=y;}
    //Member output 
    void Point::output(){
        //two match the output
        if(xCord != 0 && yCord !=0){
            cout << "(" << xCord << ", " << yCord << ")" << endl;
        }
        else{
            cout << xCord << ", " << yCord << endl;
        }
        
    }
    //overload the insertion operator <<
    ostream& operator<<(ostream& os, const Point& p){
        os << "(" << p.getX() << ","<<p.getY() << ")";
        return os;
    }
    //overload the extraction operator >>
    istream& operator>>(istream& is, Point& p){
        double x,y;
        is >> x >> y;
        p.setX(x);
        p.setY(y);
        return is;
    }
    bool operator==(const Point& p1,const Point& p2){
       return p1.xCord == p2.xCord && p1.yCord == p2.yCord;
    }
    Point Point::operator+(const Point& otherC){
        double Xc = xCord + otherC.xCord;
        double Yc = yCord + otherC.yCord;
        return Point(Xc,Yc);
    }
    Point Point::operator+(int intV){
        double NewX = xCord + intV;
        double NewY = yCord + intV;
        return Point(NewX,NewY) ;
    }
    Point Point::operator+=(const Point& otherC){
        xCord += otherC.xCord;
        yCord += otherC.yCord;
        return *this;
    }
    Point Point::operator+=(int intv){
        xCord += intv;
        yCord += intv;
        return *this;
    }
    double& Point::operator[](int index){
        assert(index >=0 && index <= 1);
        if(index == 0){
            return xCord;
        }else{
            return yCord;
        }
    }
    //prefix ++
    Point& Point::operator++(){
        ++xCord;
        ++yCord;
        return *this;
    }
    //postfix ++
    Point Point::operator++(int){
        Point temp(xCord, yCord);
        ++xCord;
        ++yCord;
        return temp;
    }