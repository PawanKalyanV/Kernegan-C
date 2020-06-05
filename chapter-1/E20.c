
 /*
 * program detab that replaces the tab with proper
 * number of blanks to space to the next tab stop
 */ 

#include<stdio.h>

#define tab 8

int main()
{
  int c,i;
 
  while ( c = getchar() != EOF )
     {
       if ( c == '\t' )
	 {
          for ( i=0; i<8 ;i++ )
          putchar(' ');
         }
       else 
	 putchar(c);
     }
   return 0;
}



















































