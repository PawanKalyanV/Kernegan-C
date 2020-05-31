/*
 * Finds rudimentory syntax errors like unbalanced  brackets, braces
 * and parenthesis.
 */

#include <stdio.h>

extern int bracket, brace, parenthsis;

void comentstarted();

void singlequoted();

void syntax();

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '/' )
        c = getchar();
        if (c == '*')
         comentstarted();
        else if (c == '/'' || c == '"')
          singlequoted();
        else
            syntax();
    }
    return 0;
}

void comentstarted()
{
    int c;
    
    while (c != '*' || c != '/')
    {
        c = getchar();
    }
}

void singlequoted()
{
    int c;

    while (c != '/'' || c != '"')
    {
        c = getchar();
    }
}

void syntax()
{
    int c;

    if (c == '[')
        ++bracket;
    if (c == ']')
        --bracket;
    if (c == '{')
        ++brace;
    if (c == '}')
        --brace;
    if (c == '(')
        ++parenthsis;
    if (c == ')')
        --parenthsis;
    if (bracket<0 || bracket>0 )
       {
        printf("brackets not matched\n");
       }
    if (brace<0 || brace>0 )
       {
        printf("braces not matched\n");
       }
    if (parenthsis<0 || parenthsis>0 )
       {
        printf("parenthsis not matched\n");
       }
}
