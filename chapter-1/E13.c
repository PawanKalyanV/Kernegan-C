
/* histogram of lengths of inputs */

#include<stdio.h>

int main()
{
    int c;

    while ( (c = getchar() ) != EOF)
    {
        if (c == ' ' )
        putchar('\n');
        else
        putchar('|');
    } 
    return 0;
}

#include<stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF )
    {

     if (c == ' ')
        putchar(' ');
     else
        putchar('_');
        putchar('\n');
    }
    return 0;
}
