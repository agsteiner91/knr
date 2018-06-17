#include <stdio.h>

/*fahr to cel conversion table using a separate conversion function. 
  knr excercise 1-15.*/

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahr_to_cel(int temp);

float fahr_to_cel(int temp)
{
    float f; f = temp;

    return 5*(f-32)/9;
}

int main()
{
    int i;
    printf("Fahr\tCel\n");
    for (i = LOWER; i <= UPPER; i = i + STEP)
	printf("%i\t%2.1f\n",i,fahr_to_cel(i));
}
