#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"

Matrix *create(size_t rows, size_t cols)
{
    Matrix *p = NULL;
    if (rows == 0 || cols == 0)
    {
        fprintf(stderr, "rows and/or cols is 0.\n");
        return NULL;
    }
    // allocate memory
    p = (Matrix *)malloc(sizeof(Matrix));
    if (p = NULL)
    {
        fprintf(stderr, "Failed to allocate memory for a matrix.\n");
        return NULL;
    }
    p->rows = rows;
    p->cols = cols;
    p->data = (float *)malloc(p->rows * p->cols * sizeof(float));

    if (p->data == NULL)
    {
        fprintf(stderr, "Failed to allocate memory for the matrix data.\n");
        free(p); // don't forget to free memory here
        return NULL;
    }

    return p;
}

bool release(Matrix *p)
{
    if (!p)
        return false;
    if (p->data)
        free(p->data);
    free(p);

    return true;
}

bool add(const Matrix *input1, const Matrix *input2, Matrix *output)
{
    if (input1 == NULL)
    {
        fprintf(stderr, "File %s, line %d, Function %s(): The 1st parameter is NULL.\n",
                __FILE__, __LINE__, __FUNCTION__);
        return false;
    }
    else if (input1->data == NULL)
    {
        fprintf(stderr, "%s(): The 1st parameter has no valid data.\n",
                __FUNCTION__);
    }

    if (input2 == NULL)
    {
        fprintf(stderr, "File %s, line %d, Function %s(): The 2nd parameter is NULL.\n",
                __FILE__, __LINE__, __FUNCTION__);
        return false;
    }
    else if (input2->data == NULL)
    {
        fprintf(stderr, "%s(): The 2nd parameter has no valid data.\n",
                __FUNCTION__);
    }

    if (output == NULL)
    {
        fprintf(stderr, "File %s, line %d, Function %s(): The 3rd parameter is NULL.\n",
                __FILE__, __LINE__, __FUNCTION__);
        return false;
    }
    else if (output->data == NULL)
    {
        fprintf(stderr, "%s(): The 3rd parameter has no valid data.\n",
                __FUNCTION__);
    }

    if (input1->rows != input2->rows || input2->rows != output->rows ||
        input1->cols != input2->cols || input2->cols != output->cols)
    {
        fprintf(stderr, "The input and the output do not match. They should have the same size.\n");
        fprintf(stderr, "Their sizes are (%zu, %zu), (%zu, %zu) and (%zu, %zu)",
                input1->rows, input2->cols,
                input2->rows, input2->cols,
                output->rows, output->cols);
        return false;
    }

    // version1 the best one
    size_t length = input1->rows * input2->cols;
    const float *p1 = input1->data;
    const float *p2 = input2->data;
    float *p3 = output->data;
    for (size_t i = 0; i < length; i++)
        *(p3++) = *(p1++) + *(p2++);

    // version2
    for (size_t r = 0; r < input1->rows; r++)
    {
        const float *p1 = input1->data + input1->cols * r;
        const float *p2 = input2->data + input2->cols * r;
        float *p3 = output->data + output->cols * r;

        for (size_t c = 0; c < input1->cols; c++)
            *(p3++) = *(p1++) + *(p2++);
    }
}