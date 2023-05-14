#include <iostream>
using namespace std;

int main(){
    bool flag = true;
    float f = 0.2f;

    cout.setf(ios::showpoint);
    cout.setf(ios::boolalpha);
    cout<<flag<<endl;   // true
    cout<<f<<endl;  // 0.200000

    cout.unsetf(ios::showpoint);
    cout.unsetf(ios::boolalpha);
    cout<<flag<<endl;   // 1
    cout<<f<<endl;  // 0.2
    
    return 0;
}

