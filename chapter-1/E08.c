
/* counting number of blanks and tabs newline */

#include<stdio.h>

int main()
{
    int c, blank=0, tab=0, newline=0;

    while((c=getchar() !=EOF))
          if(c=='\n')
            ++newline;
          if(c=='\t')
            ++tab;
          if(c==' ')
            ++blank;
        printf("newlines=%d  tabs=%d  blanks=%d",newline,tab,blank);
        return 0;

}
