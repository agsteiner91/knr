#include <stdio.h>

/*copy input to output; 1st version*/
main()
{
    int c;
    c = 3;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
