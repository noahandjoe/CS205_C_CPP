#include <iostream>
#include <memory>

using namespace std;

int main(){
    shared_ptr<double> pd = make_shared<double>(5);
    cout<<"*pd = "<<*pd<<endl;

    shared_ptr<double> pshared = pd;
    cout<<"*pshared = "<<*pshared<<endl;

    shared_ptr<string> pstr = make_shared<string>("Hello world!");
    cout<<"*pstr = "<<*pstr<<endl;
    
    return 0;
}

/*
*pd = 5
*pshared = 5
*pstr = Hello world!
*/
