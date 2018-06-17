#include <stdio.h>
#define MAXLINE 3000 /* maximum input line size */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len; /*length of current line*/
    int max; /*length of longest line*/
    char line[MAXLINE]; /*current input line*/
    char longest[MAXLINE]; /*longest line saved here*/

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) 
        if (len > max) {
            max = len;
            copy(longest,line);
        }
    if (max > 0)
        printf("Longest line is %i characters\n",max);
        printf("%s\n", longest);
        printf("foo");
    return 0;
}

/*getline: read a line into s, return length */
int get_line(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    while ((c = getchar()) != EOF && c != '\n')
        ++i;
    if (c == '\n' && i <= lim) {
        s[i] = c;
        ++i;
    }
    else if (c == '\n' && i > lim) 
        ++i;

    if (i <= lim)
        s[i] = '\0';
    else if (c == '\n')
        s[lim] = '\0';
    else
        s[lim-1] = '\0';

    return i;
}

/*copy: copy from into to*/
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
        
