#include <stdio.h>

int main(){
    signed char a = 127;
    unsigned char b = 0xff;
    unsigned char c = 0;

    a++;
    b++;
    c--;
    printf("a=%d\nb=%d\nc=%d\n",a,b,c);

    // a=-128
    // b=0
    // c=255
    return 0;
}
