#include <stdio.h>

unsigned setbits(unsigned x, unsigned p, unsigned n, unsigned y);

unsigned setbits(unsigned x, unsigned p, unsigned n, unsigned y)
{
    s = (y & ~(~0 << n)) << (p - n);
    return (x & (~0 & s)) | s;
}

int main()
{
    printf("%i",setbits(5,1,1,2));
}
