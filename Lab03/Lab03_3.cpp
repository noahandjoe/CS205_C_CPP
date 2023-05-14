#include <iostream>
using namespace std;

int main(){
    int n, fa;
    do{
        fa *= n;
        n++;
    }while(n<=10);

    cout<<"fa = "<<fa<<endl; //fa = 0
    
    return 0;
}