#include <stdio.h>

#define RANGE 128

int main()
{
    int i;
    char c = -127;
    
    for (i=-127;i<RANGE;++i) {
        ++c;
        printf("%i\t%c\n",i,c);
    }
}

