
/* fahrn to celcius */

#include<stdio.h>

int main()
{
    float celcius, fahrn;
    int lowr=0, uppr=300, step=20;
    fahrn=lowr;
    printf("celcius    fahrenhiet \n");

    while(fahrn<=uppr)
    {
        celcius=(5.0/9.0)*(fahrn-32);
        printf("%.2f      %.2f\n",celcius,fahrn);
        fahrn=fahrn+step;

    }
    return 0;
}
