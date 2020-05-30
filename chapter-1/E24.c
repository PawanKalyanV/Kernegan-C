#include<stdio.h>
int bracket,brace,parenthsis;
void doublecoment();
void singlecoment();
void syntax();
int main()
{
    int c;
    extern int bracket,brace,parenthsis;
    while((c = getchar()) != EOF)
    {
        if (c == '/' )
        if (c == '*')
         doublecoment();
        else if (c == '/' || c == '"')
          singlecoment();
        else
            syntax();

    }return 0;
}
void doublecoment()
{
    int c;
    while (c != '*' || c != '/')
    {
        c = getchar();
    }

}
void singlecoment()
{
    int c;
    while (c != '/' || c != '"')
    {
        c = getchar();
    }
}
void syntax()
{
    int c;
    extern int bracket,brace,parenthsis;
    if (c == '[')
        ++bracket;
    if (c == ']')
        --bracket;
    if (c == '{')
        ++brace;
    if (c == '}')
        --brace;
    if (c == '(')
        ++parenthsis;
    if (c == ')')
        --parenthsis;
    if (bracket<0 || bracket>0 )
       {
        printf("brackets not matched\n");
       }
    if (brace<0 || brace>0 )
       {
        printf("braces not matched\n");
       }
    if (parenthsis<0 || parenthsis>0 )
       {
        printf("parenthsis not matched\n");
       }
}
