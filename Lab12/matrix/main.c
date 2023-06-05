#include <stdio.h>
#include "matrix.h"

int main(){
    Matrix* matA = create(2,3);
    Matrix* matB = create(2,3);
    Matrix* matC = create(2,3);
    Matrix* matD = create(2,3);
    Matrix* matNULL = NULL;

    matA->data[3] = 2.3f;
    matB->data[3] = 3.1f;

    if(!add(matA, matB, matC))
        fprintf(stderr, "Matrix addition failed.");
    else{
        printf("result=%f\n", matC->data[3]);
    }

    add(matA, matB, matD);

    add(matNULL, matB, matC);

    return 0;
}