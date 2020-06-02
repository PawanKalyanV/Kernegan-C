
/* Remove comments from program */

#include<stdio.h>

void comment();

void quote();

int main()
{
    int c, d;

    while (( c = getchar() ) != EOF )
    {
       if (c == '"')
       {
	  putchar(c);
           quote();
       }

        if (c == '/')
	{
        d= getchar();
        if (d == '*')
           comment();
	}
        putchar(c);
    } 
    return 0;
}

void comment()
{
    int c, i;
    c = getchar();
    i = getchar();

    while (c != '*' && i != '/')
    {
	c = i;
	i = getchar();
    }

}

void quote()
{
     int c;
     c = getchar();

     while (c != '"')
     {
      putchar(c);
     c = getchar();
     }
     putchar(c); 
}
