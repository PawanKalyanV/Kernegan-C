
/* histogram of lengths of inputs */

#include<stdio.h>

int a[24]={0};

int main()
{
	int c, i, end_c=' ', n=0;

    while ( (c = getchar() ) != EOF)
     {
       if ( c != ' ' && end_c == ' ' )
           n++;
       if ( c != ' ' && end_c != ' ' )
	   n++;
       if ( c == ' ' && end_c != ' ' )
	   {
	    a[n]=a[n]++;
            n=0;
	   }
           end_c=c;
      }
       for ( i=0 ; i<24 ; i++ )
	   printf( "%d\n",a[i] );              
}
