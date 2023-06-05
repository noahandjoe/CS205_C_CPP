#include<iostream>
using namespace std;

class Parent{
    private:
    int id;
    string name;

    public:
    Parent():id(1),name("null"){
        cout<<"calling default constructor Parent()\n";
    }
    Parent(int i, string n):id(i), name(n){
        cout<<"calling Parent constructor Parent(int, string)\n";
    }

    friend ostream& operator<<(ostream& os, const Parent& p){
        return os<<"Parent:"<<p.id<<","<<p.name<<endl;
    }
};

class Child : public Parent{
    private:
    int age;

    public:
    Child():age(0){
        cout<<"call Child default constructor Child()\n";
    }
    Child(int age):age(age){
        cout<<"calling Child constructor Child(int)\n";
    }
    Child(const Parent& p, int age):Parent(p), age(age){
        cout<<"calling Child constructor Child(Parent, int)\n";
    }
    friend ostream& operator<<(ostream& os, const Child& c){
        return os<<(Parent&)c<<"Child:"<<c.age<<endl;
    }
};

int main(){
    Parent p(101, "Liming");
    Child c1(19);
    cout<<"values in c1:\n"<<c1<<endl;

    Child c2(p, 20);
    cout<<"values in c2:\n"<<c2<<endl;

    Child c3 = c2;
    cout<<"values in c3:\n"<<c3<<endl;

    Child c4;
    cout<<"Before assignment, values in c4:\n"<<c4<<endl;
    c4 = c2;
    cout<<"values in c4:\n"<<c4<<endl;

    return 0;
}