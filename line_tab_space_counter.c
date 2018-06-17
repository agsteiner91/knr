#include <stdio.h>

/* counts lines, tabs, and spaces in file */

main()
{
    int c, nl, nt, ns;
    nl = 0; nt = 0; ns = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t') 
            ++nt;
        if (c == '\n') 
            ++nl;
        if (c == ' ') 
            ++ns;
    }

    printf("num_lines: %d\n",nl);
    printf("num_tabs: %d\n",nt);
    printf("num_spaces: %d\n",ns);
}
