#include "Rectangle.h"

    Rectangle::Rectangle():height(0),width(0),Llcornor(0,0){}
    Rectangle::Rectangle(double w,double h, Point c):width(w),height(h),Llcornor(c){}
    void Rectangle::output()const{
        cout << "Width:" << width << ", " 
        << "Height:" << height << ", " 
        << "cornor:(" << Llcornor.getX() <<", "<<Llcornor.getY()<<")"<<endl;//This is to match the output
        //Llcornor.output();
    }
    // function to return the circumfrance
    double Rectangle::circumference()const{
        return 2*(height+width);//Perimeter = 2 (Length + Width)
    }
    //function to return the area
    double Rectangle::area()const{
        return width*height;//A=w*l
    }
    ostream& operator<<(ostream& os, const Rectangle& r){
        os << "Width:" << r.width << ", " 
        << "Height:" << r.height << ", " 
        << "cornor:(" << r.Llcornor.getX() <<", "<< r.Llcornor.getY()<<")";
        return os;
    }
    istream& operator>>(istream& is, Rectangle& r){
        double width, height;
        Point corner;
        cout << "Enter width and height: ";
        is >> width >> height;
        cout << "Enter x and y for left right corner of Rectangle: ";
        is >> corner;
        //updates the values
        r.width = width;
        r.height = height;
        r.Llcornor = corner;
        return is;
    }
      double Rectangle::operator[](int index){
        assert(index >=0 && index <= 3);
        if(index == 0){
            return width;
        }else if(index == 1){
            return height;
        }else if(index == 2){
            return Llcornor.getX();
        }else{
            return Llcornor.getY();
        }
    }