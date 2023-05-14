#include <iostream>
using namespace std;

int main(){
    cout<<fixed;
    float f1 = 1.0f;
    cout<<"f1 = "<<f1<<endl;    // f1 = 1.000000

    float a = 0.1f;
    float f2 = a+a+a+a+a+a+a+a+a+a;
    cout<<"f2 = "<<f2<<endl;    // f2 = 1.000000

    if(f1 == f2)
        cout<<"f1 = f2"<<endl;
    else
        cout<<"f1 != f2"<<endl; // f1 != f2
    
    return 0;
}



