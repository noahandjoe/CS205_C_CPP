#include "mymath.h"
#include <iostream>
using namespace std;

float arraySum(const float *array, long size)
{
    if (array == NULL)
    {
        cerr << "NULL pointer!" << endl;
        return 0.0f;
    }
    float sum = 0.0f;
    for (long i = 0; i < size; i++)
        sum += array[i];
    return sum;
}