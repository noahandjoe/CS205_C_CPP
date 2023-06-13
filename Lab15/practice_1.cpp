#include <iostream>
#include <cmath>

using namespace std;

class Point{
    private:
    double x, y;

    public:
    Point(double xx = 0, double yy = 0):x(xx),y(yy){}
    double getX()const{return x;}
    double getY()const{return y;}

    void show() const {cout<<"x"<<","<<y<<endl;}
    friend double distance(const Point& p1, const Point& p2);
};

double distance(const Point& p1, const Point& p2){
    return sqrt(pow((p1.x-p2.x),2) + pow((p1.y-p2.y),2));
}

int main(){
    Point p(1,1);
    Point q(4,5);
    cout<<"The distance of the two points is: "<<distance(p,q)<<endl;
}

