#include <stdio.h>

#define LIMIT 100

char s[LIMIT];

int htoi (char s[]);
void stdin_to_string ();

int main()
{
    /*int c = 'a';
    int e = 'f';
    int d = 'A';
    int f = 'F';
    int g = '9';
    int o = '0';
    printf("%i\n%i\n%i\n%i\n%i\n%i\n",c,e,d,f,g,o);*/
    
 /*   for (i=0;i*/
   /* printf("%i\n%i\n%i\n",'0','f','F');*/
    stdin_to_string();
    printf("%i\n",htoi(s));

}

int htoi (char s[])
{
    int i, n;

    n = 0;
    for (i = 0; s[i] != '\0' && s[i] != ' '; i++) {
        if (s[i] < '0' || (s[i] > '9' && s[i] < 'A') || (s[i] > 'F' && s[i] < 'a') 
            || s[i] > 'f')
            continue;
        if (s[i] >= 'a' && s[i] <= 'f') {
            s[i] = s[i] - 39; }
        else if (s[i] >= 'A' && s[i] <= 'F')
            s[i] = s[i] - 7;
        n = n*16 + (s[i] - '0');
        } 

    return n;
}

void stdin_to_string ()
{
    int i,c;

    for (i=0;i< LIMIT - 1 && (c = getchar()) != EOF; i++) 
        s[i] = c;

    s[i] = '\0';
}
