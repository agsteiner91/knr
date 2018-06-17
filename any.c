#include <stdio.h>

int any(char s1[], char s2[]);

//first location in s1 that any character from s2 occurs, -1 if no overlap
int any(char s1[], char s2[])
{
    int i, j, found;
    found = 0;
    i = -1;

    while (found == 0 && s1[++i] != '\0')
    {
        for (j = 0; s2[j] != '\0' && found == 0; j++)
        {
            if (s1[i] == s2[j])
                found = 1;
        } 
    }

    if (found == 1)
        return i;
    else
        return -1;
}

int main()
{
    char s1[] = "asdfasdfasg";
    char s2[] = "kkjhlkjhunsg";

    printf("%s %s %i\n",s1,s2,any(s1,s2));
}
