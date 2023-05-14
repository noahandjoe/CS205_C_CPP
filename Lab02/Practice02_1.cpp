#include <iostream>
using namespace std;

int main(){
    cout<<56.8<<endl;   //56.8

    cout.width(12);
    cout.fill('+');
    cout<<456.77<<endl; //++++++456.77

    cout.precision(2);
    cout<<123.356<<endl;    //1.2e+02

    cout.precision(5);
    cout<<3897.678485<<endl;    //3897.7

    return 0;
}