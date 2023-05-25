#include "swap.h"
#include <iostream>

int main()
{
    int a = 11;
    int b = 22;
    swap(a, b);
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    return 0;
}

/*
g++ -c swap.cpp 
ar -cr libswap.a swap.o
g++ main.cpp -L. -lswap --std=c++11
*/