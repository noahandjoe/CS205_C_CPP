#include <iostream>

using namespace std;

class Point{
    friend class Circle;

    private:
    double x;
    double y;

    public:
    Point(double xx = 0, double yy = 0):x(xx),y(yy){}
    Point(Point& p){
        x = p.x;
        y = p.y;
    }
    double getX(){return x;}
    double getY(){return y;}

    void show() const {cout<<x<<","<<y<<endl;}
};

class Circle{
    private:
    Point center;
    double radius;

    public:
    Circle():center(0,0),radius(1.0){}
    Circle(Point& p, double r):center(p),radius(r){}

    Circle& move(Point& p){
        center.x = p.x;
        center.y = p.y;
        return *this;
    }

    void show() const{
        center.show();
        cout<<"radius:"<<radius<<endl;
    }
};

int main(){
    Point p1(1,1), p2(4,5);
    Circle c1;
    Circle c2(p1,12);

    cout<<"Before move:"<<endl;
    c1.show();
    c2.show();

    cout<<"After move:"<<endl;
    c1.move(p1);
    c2.move(p2);
    c1.show();
    c2.show();

    return 0;
}

/*
Before move:
0,0
radius:1
1,1
radius:12
After move:
1,1
radius:1
4,5
radius:12

*/