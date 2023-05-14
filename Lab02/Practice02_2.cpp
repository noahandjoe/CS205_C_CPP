#include <iostream>
using namespace std;

int main(){
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout<<56.8<<endl;   // 56.800000
    cout.width(12);
    cout.fill('+');
    cout<<456.77<<endl; // ++456.770000

    cout.precision(2);  
    cout<<123.356<<endl;    // 123.36

    cout.precision(5);
    cout<<3897.678485<<endl;    // 3897.67848

    return 0;
}
