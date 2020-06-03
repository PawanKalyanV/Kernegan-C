/*
 * Finds rudimentory syntax errors like unbalanced  brackets, braces
 * and parenthesis.
 */

#include <stdio.h>

int bracket, brace, parenthsis;

void in_comentstarted();

void in_singlequoted();

void in_doublequoted();

int main()
{
    int c;

    while (( c = getchar()) != EOF )
  {
        if ( c == '/' )
	 {
          putchar(c);
          c = getchar();
	 }
        if ( c == '*' )
	{
	  putchar(c);
          in_comentstarted();
	}
        else if ( c == '\'' )
	{
	   putchar(c);
          in_singlequoted();
	}
	else if ( c == '"')
	{
	   putchar(c);
	  in_doublequoted();
	}
        else if ( c == '(' || c == '{' || c == '[' )
         {
	
             if (c == '[')
             {
               putchar(c);
               ++bracket;
	     }
             if (c == ']')
	     {
	       putchar(c);
               --bracket;
	     }
             if (c == '{')
	     {
	       putchar(c);
               ++brace;
	     }
             if (c == '}')
	     {
	       putchar(c);
               --brace;
	     }
             if (c == '(')
	     {
	      putchar(c);
              ++parenthsis;
	     }
             if (c == ')')
	     {
	      putchar(c);
              --parenthsis;
	     }

            if (bracket <0 && bracket>0 )
             {
               printf("brackets not matched\n");
             }
           if (brace<0 && brace>0 )
             {
               printf("braces not matched\n");
             }
          if (parenthsis<0 && parenthsis>0 )
            {
              printf("parenthsis not matched\n");
            }   
        }

    else
    { 
	putchar(c);
    }
      
    return 0;
  }

void in_comentstarted()
{
    int c, i;
    c = getchar();

    while ( c == '*')
    { 
	putchar(c);
       i = getchar();
      if ( i == '/')
      {
       putchar(i);
      }
      else 
      {
	printf(" error in comment ");
      }	
     
    }
     putchar(c);
}

void in_doublequoted()
{
  int c;
  c = getchar();

  while ( c != '"')
  {
    putchar(c);
    c = getchar();
  }
  putchar(c);
}


void in_singlequoted()
{
    int c;
    c = getchar();

    while ( c != '\'' )
        
    {
	putchar(c);
       c = getchar();
    }
    putchar(c);
 }
}

