
// * Remove comments from program 
// * printf("/* hi */");
// * /*hi */
// * a=a/b
// * char a= '\"'
 

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

       else if (c == '/')
	{
        d= getchar();
        if (d == '*')
           comment();
	else
         putchar(c);
 	 putchar(d);
	}
       else
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
