#include <iostream>
using namespace std;

int main(){
    bool flag = true;
    double a = 2.3876;
    double b = 0.46e2;

    cout<<boolalpha<<flag<<endl;    // true
    cout<<fixed<<a<<endl;   // 2.387600
    cout<<b<<endl;  // 46.000000

    cout<<noboolalpha<<flag<<endl;  // 1
    cout.unsetf(ios::fixed);
    cout<<a<<endl;  // 2.3876
    cout<<b<<endl;  // 46
    
    return 0;
}
