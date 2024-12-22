#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

//non-member function distance
double distance(const Point& a,const Point& b){
    /*double x1 = a.getX();
    double x2 = b.getX();
    double y1 = a.getY();
    double y2 = b.getY();
    return sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));*/

    //shorter version
    double tX = b.getX()-a.getX();
    double tY = b.getY()-a.getY();
    return sqrt(tX*tX+tY*tY);
}

int main(){
// part 1
Point a;
a.setX(1.5);
a.setY(2.5);
cout<<a.getX()<<endl;//1.5
cout<<a.getY()<<endl;//2.5
a.output();//(1.5, 2.5)
// part 2
Point b, c(3,4);
cout<<distance(b,c)<<endl; // 5
Point d(3,0),e(0,4);
cout<<distance(d,e)<<endl; // 5
// part 3
Point f(3,4);
f.output();//(3, 4)
Rectangle g(10,20,f), h;//since we didnt asign anything for h it should be all 0
g.output();// Width:10, Height:20, cornor:(3, 4)
cout<<"Area: "<<g.area()<<endl;// 200
cout<<"Circumference: "<<g.circumference()<<endl;// 60
h.output();//Width:0, Height:0, cornor:(0, 0)
// part 4
Point i(3,4);
cout<<i<<endl;//(3,4)
cout<<"Enter x, y:";
cin>>i;//1 2
cout<<i<<endl;//width:10, height:20, corner:(1,2)
Rectangle r(10,20,i);
cout<<r<<endl;
cin>>r;//w(20) h(30) , cornor(10 20)
cout<<r<<endl;// width:20, height:30, corner:(10,20)
// part 5
Point j(3,4),k(1,2);
cout<<j+k<<endl; // (4,6)
cout<<j+10<<endl; // (13,14)
cout<<j<<endl; // (3,4)
cout<<k<<endl; // (1,2)
cout<<(j+=k)<<endl; // (4,6)
cout<<j<<endl; // (4,6)
cout<<k<<endl; // (1,2)
cout<<(j+=10)<<endl;// (14,16)
cout<<j<<endl; // (14,16)
//part 6
Point l(3,4);
cout<<l[0]<<endl; // 3
cout<<l[1]<<endl; // 4
l[0]=1;
l[1]=2;
cout<<l<<endl; // (1,2)
cout<<++l<<endl; // (2,3)
cout<<l<<endl; // (2,3)
cout<<l++<<endl; // (2,3)
cout<<l<<endl; // (3,4)
Point m(3,5);
Rectangle n(10,20,m);
cout<<n<<endl;//width:10, height:20, corner:(3,5)
cout<<n[0]<<endl;//10
cout<<n[1]<<endl;//20
cout<<n[2]<<endl;//3
cout<<n[3]<<endl;//5
}