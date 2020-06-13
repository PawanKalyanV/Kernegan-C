

#include<stdio.h>

int main()
{
  int c, n=0, end_c=EOF;

 while (( c = getchar() ) != EOF )
   {
      if ( c != ' ' )
	 {
          if ( end_c == ' ' )
           n++;
         }
      if ( c == '\n' )
         {
         printf( "%d",n );
         }
       end_c = c;
   }  
}
