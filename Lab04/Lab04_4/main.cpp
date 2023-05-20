#include <iostream>
#include "fib.h"
using namespace std;

int main(){
    int n;
    cout<<"Please input a positive integer: ";
    cin>>n;

    int count = 0;
    for(int i = 1; i<=n; i++){
        cout<<fibonacci(i)<<" ";
        count++;

        if(count == 10){
            cout<<endl;
            count = 0;
        }
    }

    if(count != 0){
        cout<<endl;
    }
    
    return 0;
}