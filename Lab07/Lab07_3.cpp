#include<iostream>

using namespace std;

bool vabs(int* p, int n){
    for(int i=0; i<n; i++){
        if(p[i]<0)
            p[i]*=-1;
    }
    return true;
}

bool vabs(float* p, int n){
    for(int i=0; i<n; i++){
        if(p[i]<0)
            p[i]*=-1;
    }
    return true;
}

bool vabs(double* p, int n){
    for(int i=0; i<n; i++){
        if(p[i]<0)
            p[i]*=-1;
    }
    return true;
}

int main(){
    const int size = 5;
    // int i_arr[size] = {1,-2,3,-4,5};
    float f_arr[size] = {1.3f,-2.5f,3.7f,-4.1f,5.2};
    for(float item:f_arr){
        cout<<item<<endl;
    }
    cout<<"---------------------------\n";
    vabs(f_arr, size);
    for(float item:f_arr){
        cout<<item<<endl;
    }
    return 0;
}