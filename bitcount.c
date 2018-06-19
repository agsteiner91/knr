/*bitcount: excercise 2-9 of knr to rewrite a bitcount function using x &= (x-1)*/
#include <stdio.h>

int bitcount(unsigned x)
{
    int b;

    for (b=0;x!=0;x &= (x-1))
        b++;

    return b;
}

int main()
{
    unsigned x = 3;

	printf("Unsigned int %i has %i 1 bits\n",x,bitcount(x));
}
