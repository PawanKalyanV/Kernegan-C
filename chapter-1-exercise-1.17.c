/* Prints all input lines greater that are longer than 80 characters. */

#include<stdio.h>

#define MAXLINE 1000

int getLine(char line[], int maxline);

int main()
{
    int len;
    int max=80;
    char line[MAXLINE];
    
    while ((len = getLine(line, MAXLINE)) > 0)
        if (len >= max)
        {
          printf( "%s", line);
          return 0;
        }
}

int getLine(char s[], int lim)
{
    int c, i;

    for (i=0; i < lim-1 && (c = getchar()) != EOF && c !='\n'; ++i)
         s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
         ++i;
    }

    s[i]= '\0';
    return i;
}

