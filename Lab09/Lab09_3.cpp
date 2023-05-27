#include<iostream>
using namespace std;

class Complex{
    private:
    double realPart;
    double imaginaryPart;

    public:
    Complex(double real=0.0, double imaginary=0.0)
        :realPart(real),imaginaryPart(imaginary){}
    Complex add(const Complex& other)const{
        double real = realPart+other.realPart;
        double imaginary = imaginaryPart+other.imaginaryPart;
        return Complex(real, imaginary);
    }

    Complex subtract(const Complex& other)const{
        double real = realPart - other.realPart;
        double imaginary = imaginaryPart - other.imaginaryPart;
        return Complex(real, imaginary);
    }
    void display()const{
        cout<<realPart;
        if(imaginaryPart>=0){
            cout<<"+"<<imaginaryPart<<"i"<<endl;
        }else{
            cout<<"-"<<-imaginaryPart<<"i"<<endl;
        }
    }
};

int main(){
    Complex c1(2.0, 3.0);
    Complex c2(1.5, -2.5);

    Complex sum = c1.add(c2);
    Complex differenct = c1.subtract(c2);

    c1.display();
    c2.display();
    sum.display();
    differenct.display();
}