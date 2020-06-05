
/* entab */

#include<stdio.h>

#define tab 4

int main()
{
  int c;

 while ( c = getchar() != EOF )
   {
      ++count;
     if ( count = 4 )
      putchar('\t');
     else
      putchar(' ');
   }
  return 0;
}
