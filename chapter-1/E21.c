
 /*
 * program for entab which replaces all the strings of blanks 
 * by a suitable number of tabs and blanks 
 */

#include<stdio.h>

#define TAB 4

int main()
{
int c, i,  space, tab, reminder, quotient;

    while (( c = getchar() ) != EOF )
    {
       {
        if ( c == ' ' )
	  ++space;
	if (c == '\t' )
          ++tab;
	if ( c == '\n' )
          {
            quotient = (space+tab)/TAB;
	    for ( i=0; i<=quotient; i++ )
            putchar('\t');
	    reminder = (space+tab)%TAB;
	    for ( i=0; i<=reminder; i++ )
	    putchar(' '); 
          }
       else
         putchar(c);
     }
   } 
}   
