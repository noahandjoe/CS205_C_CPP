#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int sum;
    while(n>0){
        sum+=n;
        cout<<"n = "<<n<<" "; //n = 5
        cout<<"sum = "<<sum<<" "; //infinate loop
    }
    
    return 0;
}