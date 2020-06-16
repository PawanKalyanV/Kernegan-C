
 /*
 * program for entab which replaces all the strings of blanks 
 * by a suitable number of tabs and blanks 
 */

#include<stdio.h>

#define TAB 4

int main()
{
int c, n, i, end_c, reminder, quotient;

    while (( c = getchar() ) != EOF )
    {
       {

        if ( c == ' ' && end_c != ' ' )
	    n++;     
        if ( c == ' ' && end_c == ' ' )
            n++;
	 if ( c != ' ' && end_c == ' ' )
	    {
             quotient = n/TAB;
	     for ( i=0; i<quotient; i++ )
             putchar('*');
	     reminder = n%TAB;
	     for ( i=0; i<reminder; i++ )
	     putchar('#');
	     n=0;
	    }
	 }
        if ( c != ' ' )
	 putchar(c);
	 end_c=c;
       
   }
}
