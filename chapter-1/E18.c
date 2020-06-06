
 /*
 * program that remove trailing blanks and tabs
 * from each of input lines and to delete 
 * entirely blank lines
 */

#include<stdio.h>

int main()
{
  int c, end_char;

    while (( c = getchar() ) != EOF )
	{
          putchar(c);
	 while ( c == '\n' )
          {
            end_char = c;
	    if (end_char != ' ' || end_char != '\t' )
		putchar(c);
	        --c;
	  }
	}
 }

          
