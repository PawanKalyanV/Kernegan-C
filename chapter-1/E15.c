
/* Temperature conversion by using function */

#include<stdio.h>

int fun1(celcius,fahr)
  {

    celcius = ((5/9)*(fahr-32));
  }

int main()
 {
     int celcius, fahr, lowr=0, uppr=300, step=20;
     fahr=lowr;
     printf("celcius   fahrenheit\n");

     while(fahr <= uppr)
    {
       fun1(celcius,fahr);
       printf("%d   %d\n",celcius, fahr);
       fahr=fahr+step;
    }
    return 0;
 }
