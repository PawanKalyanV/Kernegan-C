
/* Remove comments from program */

#include<stdio.h>

void comment();

void quote();

int main()
{
    int c;

    while (( c = getchar() ) != EOF )
    {
       if (c == '"');
       c = getchar();
           quote();

        if (c == '/')
        c= getchar();
        if (c == '*')
           comment();
    
    } 
    return 0;
}

void comment()
{
    int c, i;
    c = getchar();
    i = getchar();

    while (c != '*' || i != '/')
    {
	c = i;
        i = getchar();
    }

}

void quote()
{
     int c;
     c = getchar();

     while (c !='"')
     {
	 c = getchar();
     }
      putchar('"');
}
