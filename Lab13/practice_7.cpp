#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Data
{
private:
    T1 a;
    T2 b;

public:
    Data(T1 m, T2 n) : a(m), b(n)
    {
        cout << "Original class template Data<T1,T2>\n";
    }
    void display() { cout << "Original class template Data:" << a << "," << b << endl; }
};

template<typename T1>
class Data<T1, char>
{
private:
    T1 a;
    char b;

public:
    Data(T1 m, char c): a(m), b(c){
        cout<<"Partial specialization Data<T1, char>\n";
    }
    void display(){
        cout<<"Partial specialization Data:"<<a<<","<<b<<endl;
    }
};

int main(){
    Data<int, int> d_original(5,8);
    d_original.display();

    Data<double, char> d_special(3.4, 'A');
    d_special.display();

    return 0;
}

/*
Original class template Data<T1,T2>
Original class template Data:5,8
Partial specialization Data<T1, char>
Partial specialization Data:3.4,A

*/