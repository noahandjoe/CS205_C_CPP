#include <iostream>
#include <limits>

using namespace std;

class MathException {};
class OverflowException : public MathException {};
class UnderflowException : public MathException {};
class ZeroDivideException : public MathException {};

double divide(int numerator, int denominator){
    if(denominator == 0)
        throw ZeroDivideException();
    
    double d = (double)numerator/denominator;
    return d;
}

int main(){
    try{
        cout<<divide(6,2)<<endl;
        cout<<divide(6,0)<<endl;
    }catch(ZeroDivideException& zd){
        cerr<<"Zero Divide Error"<<endl;
    }catch(OverflowException& oe){
        cerr<<"Overflow Error"<<endl;
    }catch(UnderflowException& ue){
        cerr<<"Underflow Error"<<endl;
    }catch(MathException& me){
        cerr<<"Math Error"<<endl;
    }

    return 0;
}