#include <stdio.h>

#define TABSPACE 4

void printTab(int m);

int main()
{
    int c; 
    int i; 

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
            printTab(TABSPACE);
        else if (c != '\\')
            putchar(c);
        else if ((c = getchar()) == 't')
            printTab(TABSPACE);
        else {
            putchar('\\');
            putchar(c);
        }
    }
    return 0;
}

void printTab(int m)
{
    int i;
    for (i = 0; i < m; ++i)
        printf(" ");
}
