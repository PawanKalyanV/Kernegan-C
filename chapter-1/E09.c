
/*
 * coping its input to its output replacing one or more blanks
 * by a single blank
*
* /
#include<stdio.h>

int main()
{
    int c, end_c; /* end character */
    end_c=c; /* we initialize character in end char for comparision */

    while (( c = getchar() ) != EOF )
    {
        if(c == ' ')
        {
          if (end_c != ' ') /* more than one space simply print char */
           putchar(c);
        }
        else
            putchar(c); /*  simply print char until we enter space */
            end_c=c; /* end of the character should store in end_c 
			for comparision  of next char we entered */


    }
    return 0;
}
