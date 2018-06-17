#include <stdio.h>

int main()
{
    signed int i = -4;
    unsigned int j = 4;
    int c = 2;

    printf("%i\n%i\n%i\n\n",i,i>>1,i<<1);
    
    printf("%i\n%i\n%i\n\n",j,j>>1,j<<1);

    printf("%i\n", c ^ 2);
}
