
 /*
 * program for entab which replaces all the strings of blanks 
 * by a suitable number of tabs and blanks 
 */

#include<stdio.h>

#define TAB 4

int main()
{
  int c, i, count, reminder, quotient;

  while (( c = getchar() ) != EOF )
  {
    if (c != ' ')
        ++count;
       { 	
	if ( count < TAB)
	   for(i=0; i<TAB;i++)
	   {
	    putchar(' ');
	   }
	else   
	  {
           reminder = count % TAB;
	     {
            for  ( i=0; i<reminder; i++ )
	      putchar(' ');
	     }
	   quotient = count/TAB;
	     {
            for (i=0; i<quotient; i++)
	      putchar('\t');
	     }
	   } 
         }
       putchar(' ');
   }
 } 
