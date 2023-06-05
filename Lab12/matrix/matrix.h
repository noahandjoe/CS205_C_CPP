#ifndef _MATRIX_H
#define _MATRIX_H

#include <stdbool.h>

typedef unsigned long size_t;

typedef struct Matrix_
{
    size_t rows;
    size_t cols;
    float *data;
} Matrix;

Matrix *create(size_t rows, size_t cols);
bool release(Matrix *p);
bool add(const Matrix *input1, const Matrix *input2, Matrix *output);

#endif