#include<stdio.h>
int main()
{
    printf("hello world\c");
    return 0;
}

out put: hello worldc


  Exercise 1-3:

#include<stdio.h>
int main()
{
    float celcius,fahrn;
    int lowr=0,uppr=300,step=20;
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
