#include <stdio.h>
#include <string.h>

void squeeze(char s1[], char s2[]);

void squeeze(char s1[], char s2[])
{
    int i, j, k, has_char;
    has_char = 0;

    for (i = j = 0; s1[i] != '\0'; i++) {
        for (k = 0; s2[k] != '\0'; k++) {
            if (s1[i] == s2[k]) {
                has_char = 1;
            }
        }
        if (has_char == 0) 
            s1[j++] = s1[i];
        else
            has_char = 0;
        }
    
    s1[j] = '\0';   
}

int main()
{
    char s1[] = "course";
    char s2[] = "fox";

    printf("%s\n%s\n",s1,s2);
    squeeze(s1,s2);
    printf("%s\n",s1);

    return 0;
}
