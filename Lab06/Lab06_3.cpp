#include <iostream>
using namespace std;

#define SIZE 5

void sum(int*, int*, int);

int main(){
    int a[SIZE] = {10, 20, 30, 40, 50};
    int b[SIZE] = {1,2,3,4,5};
    cout<<"Before calling the function, the contents of a are: "<<endl;
    for(int i = 0; i<SIZE; i++)
        cout<<a[i]<<" ";
    sum(a, b, SIZE);
    cout<<endl;
    cout<<"After calling the function, the contents of a are: "<<endl;
    for(int i = 0; i<SIZE; i++)
        cout<<a[i]<<" ";
    
    cout<<endl;

    return 0;
}

void sum(int* pa, int* pb, int n){
    for(int i = 0; i<n; i++){
        *pa += *pb;
        pa++;
        pb++;
    }
}