
/* histogram of lengths of inputs */

#include<stdio.h>

int a[24]={0};

int main()
{
	int c, i, j, end_c=' ', n=0;

    while ( ( c = getchar() ) != EOF)
     {
       if ( c != ' ' && end_c == ' ' )
           n++;
       if ( c != ' ' && end_c != ' ' )
	   n++;
       if ( c == ' '|| c == '\n'  && end_c != ' ' )
	  {
	   a[n]++;
           n=0;
	  }
           end_c=c;
      }
       for ( i=0 ; i<24 ; i++ )
	 {
         for ( j=0 ; j<a[i] ; j++ )
	  printf( "*"); 
	 }
          printf("\n");       
}
