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
1. g++ -c mymath.cpp
2. ar -cr libmymath.a mymath.o
3. g++ main.cpp libmymath.a --std=c++11
   g++ main.cpp -L. -lmymath --std=c++11
4. ./a.out

*/