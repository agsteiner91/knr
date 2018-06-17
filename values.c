#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("CHAR:\n%i\n",CHAR_BIT);
    printf("%i\n", CHAR_MAX);
    printf("%i\n\n", CHAR_MIN);

    printf("INT:\n%i\n",INT_MAX);
    printf("%i\n\n",INT_MIN);

    printf("LONG:\n%li\n",LONG_MAX);
    printf("%li\n\n",LONG_MIN);

    printf("SHRT:\n%i\n",SHRT_MAX);
    printf("%i\n\n",SHRT_MIN);

    printf("UNSIGNED:\n%u\n",UCHAR_MAX);
    printf("%u\n",UINT_MAX);
    printf("%lu\n",ULONG_MAX);
    printf("%u\n\n",USHRT_MAX);

    printf("FLOAT:\n%i\n",FLT_RADIX);
    printf("%i\n",FLT_ROUNDS);
    printf("%i\n",FLT_DIG);
    printf("%f\n",FLT_EPSILON);
    printf("%i\n",FLT_MANT_DIG);
    printf("%f\n",FLT_MAX);
    printf("%i\n",FLT_MAX_EXP);
    printf("%f\n",FLT_MIN);
    printf("%i\n\n",FLT_MIN_EXP);

    printf("DOUBLE:\n%i\n",DBL_DIG);
    printf("%.2f\n",DBL_EPSILON);
    printf("%i\n",DBL_MANT_DIG);
    printf("%f\n",DBL_MAX);
    printf("%i\n",DBL_MAX_EXP);
    printf("%f\n",DBL_MIN);
    printf("%i\n",DBL_MIN_EXP);
}
