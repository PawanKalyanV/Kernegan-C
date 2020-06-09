
 /*
 * program that remove trailing blanks and tabs
 * from each of input lines and to delete 
 * entirely blank lines
 */

#include<stdio.h>

int main()
{
  int c, i, tab=0, space=0, end_char;
 {
    while (( c = getchar() ) != EOF )
     {
        {
         if ( c == '\t' )
	       ++tab;
	 else if ( c ==' ' )
	     ++space;
	}
         end_char = c; 
     	
      {
        if (c != '\n')
         {
          if ( end_char == ' ' || end_char == '\t' )
            {
             for ( i=0; i<=space; i++ )
             putchar(' ');
	     for ( i=0; i<=tab; i++ )
             putchar('\t');
	    }
	  }
	else      
	putchar(c);
       }	
     }
   } 
}
	 

          
