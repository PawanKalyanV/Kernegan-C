
/* Remove comments from program */
// printf("/* hi */");
// /*hi */
// a=a/b
// char a= '\"'
// /* comment */

#include<stdio.h>

void in_comment();

void in_doublequote();

void in_singlequote();

int main()
{
    int c, d;

    while ((c = getchar()) != EOF)
    {
        if (c == '"')
        {
            putchar(c);
            in_doublequote();
        }
        else if (c == '\'')
        {
            putchar(c);
            in_singlequote();
        }
        else if (c == '/') {
            d= getchar();
            if (d == '*')
            {
                in_comment();
            }
            else
            {
                putchar(c);
                putchar(d);
            }
        }
        else
        {
            putchar(c);
        }
   } 
   return 0;
}

/* Ignore all characters with in the comment. */
void in_comment()
{
    int c, i;

    c = getchar();
    i = getchar();

    while (c != '*' && i != '/')
    {
        c = i;
        i = getchar();
    }
}

/* Output all character with in the double quotes. */
void in_doublequote()
{
    int c;

    c = getchar();

    while (c != '"')
    {
        putchar(c);
        c = getchar();
    }
    putchar(c); 
}

/* Output all character with in the single quotes. */
void in_singlequote()
{
    int c;

    c = getchar();
    while (c != '\'')
    {
        putchar(c);
        c = getchar();
    }
    putchar(c);
}
