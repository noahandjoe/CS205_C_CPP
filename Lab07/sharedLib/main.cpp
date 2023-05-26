#include <iostream>
#include "mymath.h"
using namespace std;

int main(){
    float arr1[8]{1.f, 2.f, 3.f, 4.f, 5.f, 6.f, 7.f, 8.f};
    float* arr2 = NULL;

    float sum1 = arraySum(arr1, 8);
    float sum2 = arraySum(arr2, 8);

    cout<<"The result1 is "<<sum1<<endl;
    cout<<"The result2 is "<<sum2<<endl;

    return 0;
}

/*
1. g++ -shared -fPIC -o libmymath.so mymath.cpp
2. g++ main.cpp -L. -lmymath --std=c++11
3. ./a.out: error while loading shared libraries: libmymath.so: cannot open shared object file: No such file or directory
4. export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
    sudo mv libmymath.so /usr/lib
*/  