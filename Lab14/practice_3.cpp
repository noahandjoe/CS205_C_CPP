#include <iostream>
#include <limits>

using namespace std;

class MyException:public exception{
    public:
    const char* what() const throw(){ //overridden what()
        return "C++ Exception.";
    }
};

int main(){
    try{
        throw MyException();
    }catch(MyException& me){
        cout<<"MyException is caught."<<endl;
        cout<<me.what()<<endl;
    }catch(exception& e){
        cout<<"Base class exception is caught."<<endl;
        cout<<e.what()<<endl;
    }

    return 0;
}
/*
MyException is caught.
C++ Exception.
*/