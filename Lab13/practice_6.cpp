#include <iostream>
using namespace std;

template<typename Z>
class Test{
    public:
    Test(){cout<<"It is a general template object \n";}
};

template<>
class Test<int>{
    public:
    Test(){cout<<"It is a specialized template object \n";}
};

int main(){
    Test<int> p;
    Test<char> q;
    Test<float> r;

    return 0;
}

/*
It is a specialized template object 
It is a general template object 
It is a general template object 

*/