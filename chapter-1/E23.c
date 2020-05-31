/* Remove comments from program */
#include<stdio.h>
void comment();
int main()
{
    int c;
    while((c = getchar()) != EOF)
    {
        if (c == '/')
        if (c == '*')
        if (c == '/' && c=='/')
            comment();

    }return 0;
}
void comment()
{
    int c;
    while (c != '*' && c != '/')
    {
        c=getchar();
    }

}
