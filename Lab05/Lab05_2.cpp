#include <iostream>

using namespace std;

int main()
{
    int a[] = {2, 4, 6, 8, 10}, y = 1, *p;
    p = &a[1];

    printf("a=%p\np=%p\n", a, p);

    for (int i = 0; i < 3; i++)
        y += *(p + i);

    printf("y=%d\n\n", y);

    int b[5] = {1, 2, 3, 4, 5};
    int *ptr = (int *)(&b + 1);

    printf("b=%p\nb+4=%p\nptr=%p\n", b, b + 4, ptr);
    printf("%d,%d\n", *(b + 1), *(ptr - 1));

    return 0;
}

// a=0x7ffea8a35760
// p=0x7ffea8a35764
// y=19

// b=0x7ffea8a35780
// b+4=0x7ffea8a35790
// ptr=0x7ffea8a35794
// 2,5