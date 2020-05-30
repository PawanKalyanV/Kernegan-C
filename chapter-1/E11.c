#include<stdio.h>
#define IN
#define OUT
int main()
{
    int c,nl=0,nc=0,nw=0,state;
    state = 'OUT';
    while ((c = getchar()) != EOF )
    {
           ++nc;
        if (c == '\n')
           ++nl;
        if(c == ' ' || c == '\n' || c == '\t' )
           state = 'OUT';
        else if (state == 'OUT')
        {
            state = 'IN';
           ++nw;
        }
    } printf ("%d %d %d \n", nl, nw, nc );
}
