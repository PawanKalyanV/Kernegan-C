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
    int c, comentstarted, singlequoted, doublequoted;

    while (( c = getchar()) != EOF )
  {
        if ( c == '/' )
	 {
          c = getchar();
	 }
        if ( c == '*' )
	{ 
	  ++comentstarted;
          in_comentstarted();
	  if (comentstarted > 0 ||  comentstarted < 0)
	   {
	     printf(" error in comment ");
	   }
         } 
        else if ( c == '\'' )
	 {
	   ++singlequoted; 
          in_singlequoted();
	  if( singlequoted > 0 || singlequoted < 0 )
           {
	    printf(" error in sinlequote ");	 
	   }
	 }
	else if ( c == '"')
	 {
          ++doublequoted;
	  in_doublequoted();
	  if ( doublequoted > 0 || doublequoted < 0 )
	   {
            printf(" error in double quote");
	   }
	 }
        else if ( c == '(' || c == '{' || c == '[' )
         {
	    
             if ( c == '[' )
               ++bracket;
	     if ( c == ']' )
               --bracket;
	     if (bracket > 0 || bracket < 0 )
               printf("brackets not matched\n");
            
	     if ( c == '{' )
               ++brace;
	     if ( c == '}' )
               --brace;
	     if (brace > 0 || brace < 0 )
               printf("braces not matched\n");
            
	     if ( c == '(' )
              ++parenthsis;
             if ( c == ')' )
              --parenthsis;
             if (parenthsis > 0 || parenthsis < 0 )
              printf("parenthsis not matched\n");
         }
  }
      
    return 0;
}

 /* 
 * print all characters with in comment
 * display error if syntax of comment missed
 */

void in_comentstarted()
{
    int c, i, comentstarted;
    c = getchar();
    i = getchar();

    while ( c != '*' && i != '/' )
    {
      c = i;
      i = getchar(); 
    }
    --comentstarted;
}

  /*
  *  print all characters in doubleqoute
  *  untill doublequote occured 
  */

void in_doublequoted()
{
  int c, doublequoted;
  c = getchar();

  while ( c != '"')
  {
    c = getchar();
  }
  --doublequoted;
}

 /*
 * print character in singel quote
 * untill single quote occured
 */

void in_singlequoted()
{
    int c, singlequoted;
    c = getchar();

    while ( c != '\'' )
        
    {
       c = getchar();
    }
    --singlequoted;
 }


