#include <iostream>

using namespace std;

class Outer{
    public:
    class Inner{
        public:
        void fun();
    };
    Inner obj;
    void fun(){
        cout<<"Outer::Fun..."<<endl;
        obj.fun();
    }
};

void Outer::Inner::fun(){cout<<"Inner::fun..."<<endl;}

int main(){
    Outer o;
    o.fun();
    cout<<endl;
    Outer::Inner i;
    i.fun();

    return 0;
}