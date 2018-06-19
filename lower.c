/* knr ex 2-10. modify lower function from sec 2.7 to use a conditional expression 
   rather than if-else*/

#include <stdio.h>

char lower(char c)
{
    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}

#define MAXLENGTH 1000

/*implementing the lower function to take input from stdin and convert to lowercase*/
int main()
{
    
    char x[MAXLENGTH];
    int i;
    char c;

    for (i=0;i < MAXLENGTH  && (c=getchar())!=EOF;i++)
    {
        x[i] = lower(c);
    }
    x[i] = '\0';

    printf("%s",x);
}
