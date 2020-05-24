#include<stdio.h>
int main()
{
    int c,end_c=c;
    while (( c = getchar()) != EOF )
    {
        if (c ==' ')
      {
        if (end_c != ' ' )
          putchar('\n');
      }
       else
          putchar(c);
          end_c=c;
    }
     return 0;

}
