/*
 * Finds rudimentory syntax errors like unbalanced  brackets, braces
 * and parenthesis.
*/

#include <stdio.h>

int bracket, brace, parenthsis;

int  coment, singlequote, doublequote;

void in_coment();

void in_singlequote();

void in_doublequote();

int main()
{
    int c;

    while (( c = getchar()) != EOF )
  {
        if ( c == '/' )
       {
          c = getchar();
        if ( c == '*' )
         { 
	   ++coment;
           in_coment();
	  if (coment != 0)
	   {
	     printf(" error in comment ");
	   }
	 }
       } 
        else if ( c == '\'' )
	 {
	   ++singlequote; 
           in_singlequote();
	  if( singlequote != 0 )
           {
	    printf(" error in sinlequote ");	 
	   }
	 }
	else if ( c == '"')
	 {
           ++doublequote;
	   in_doublequote();
	  if ( doublequote != 0 )
	   {
            printf(" error in double quote");
	   }
	 }
        else 
         {
	    
             if ( c == '[' )
               ++bracket;
	  else if ( c == ']' )
               --bracket;
	  else if ( c == '{' )
               ++brace;
	  else if ( c == '}' )
               --brace;
          else if ( c == '(' )
              ++parenthsis;
          else if ( c == ')' )
              --parenthsis;
         }
   }
      if (bracket != 0 )
        printf("brackets not matched\n");
      if (brace != 0 )
        printf("braces not matched\n");
      if (parenthsis != 0 )
        printf("parenthsis not matched\n");
      return 0;     
}

 /* 
 * print all characters with in comment
 * display error if syntax of comment missed
 */

void in_coment()
{
    int c, i;
    c = getchar();
    i = getchar();

    while ( c != '*' && i != '/' || c != EOF )
    {
      c = i;
      i = getchar(); 
    }
    --coment;
}

  /*
  *  print all characters in doubleqoute
  *  untill doublequote occured 
  */

void in_doublequote()
{
  int c;
  c = getchar();

  while ( c != '"' || c != EOF )
  {
    c = getchar();
  }
  --doublequote;
}

 /*
 * print character in singel quote
 * untill single quote occured
 */

void in_singlequote()
{
    int c;
    c = getchar();

    while ( c != '\'' || c != EOF )
        
    {
       c = getchar();
    }
    --singlequote;
 }


