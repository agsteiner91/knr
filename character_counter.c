#include <stdio.h>

/*count characters in input; first version */

main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%1d\n", nc);
}
