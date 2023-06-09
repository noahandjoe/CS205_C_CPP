#include <iostream>
using namespace std;

template<typename T, typename U, typename V = char>
class MultipleParameters{
    private:
    T var1;
    U var2;
    V var3;

    public:
    MultipleParameters(T v1, U v2, V v3)
        :var1(v1),var2(v2),var3(v3){}
    void printVar(){
        cout<<"var1 = "<<var1<<endl;
        cout<<"var2 = "<<var2<<endl;
        cout<<"var3 = "<<var3<<endl;
    }
};

int main(){
    MultipleParameters<int , double> obj1(7, 7.7, 'c');
    cout<<"obj1 values: "<<endl;
    obj1.printVar();

    MultipleParameters<double, char, bool> obj2(8.8, 'a', false);
    cout<<"\nobj2 values: "<<endl;
    obj2.printVar();

    return 0;
}

/*
obj1 values: 
var1 = 7
var2 = 7.7
var3 = c

obj2 values: 
var1 = 8.8
var2 = a
var3 = 0
*/