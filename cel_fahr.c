# include <stdio.h>

main()
{
    float celsius, fahr;
    int lower, upper;

    celsius = 0.0;
    upper = 300.0;
    printf("Celsius,Fahr\n");
    while (celsius <= upper) 
    {
        fahr = (9.0/5.0)*celsius+32.0;
        printf("%.0f,%.1f\n",celsius,fahr);
        celsius = celsius + 1;
    }
    
}
    
