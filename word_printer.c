#include <stdio.h>

#define INSIDE 1
#define OUTSIDE 0

/*take input and print each word on a new line*/
main() 
{
     int state;
     char c;
     state = INSIDE;
    while ((c = getchar()) != EOF) {
	if (c == ' ' || c == '\n' || c == '\t')
	    state = OUTSIDE;
        else if (state == OUTSIDE) {
	    state = INSIDE;
	    printf("\n%c",c);
	    /*putchar(c);*/
	}
	else
	    putchar(c);
    }
    printf("\n");
}
