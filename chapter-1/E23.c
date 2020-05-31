
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
    int c;

    while (c != '*' && c != '/')
    {
        c = getchar();
    }

}

void quote()
{
     int c;

     while (c !='"')
     {
	 c = getchar();
     }
}
